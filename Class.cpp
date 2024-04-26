#include <iostream>
#include <string>
#include <math.h>

/*
For this Project, we are created a class called Student with Member functions and constructors.
the user will input the student information as well as some test scores. 
the output will show the information as well as the average test score. 
*/

using namespace std;

// Student Class
class Student
{
	// Data members in the private access specifier can only be accessed
	// Within the class.
private:
	string m_name;
	string m_birthdate;
	string m_year;
	string m_major;
	int m_grades[5];

	// Member functions are used to gain access to the data members in the private
	// access specifier.
public:
	void setInfo(string name, string birthdate, string year, string major)
	{
		m_name = name;
		m_birthdate = birthdate;
		m_year = year;
		m_major = major;
	}
	void setGrades(int grade[5])
	{
		for (int i = 0; i < 5; i++)
		{
			m_grades[i] = grade[i];
		}
	}
	void printGrades()
	{
		cout << "The 5 grades are: " << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << m_grades[i] << endl;
		}
	}
	void printStudentInfo()
	{
		cout << "STUDENT INFORMATION " << endl;
		cout << "\tName: " << m_name << endl;
		cout << "\tBirthdate: " << m_birthdate << endl;
		cout << "\tYear: " << m_year << endl;
		cout << "\tMajor: " << m_major << endl;
	}
	double getAverage()
	{
		double x = 0;
		for (int i = 0; i < 5; i++)
		{
			x = x + m_grades[i];
		}
		x = x / 5.0;
		return x;
	}

};

int main()
{
	Student s1, s2; // Created two objects in the Student class: s1 and s2

	// The setInfo() will populate the s1 object.
	s1.setInfo("George Lee", "05/21/53", "Freshman", "Microbiology");
	s1.printStudentInfo(); // Will print out the inforamtion for object s1.
	int test1[5] = { 89, 75, 99, 95, 96 };
	s1.setGrades(test1);
	s1.printGrades();
	cout << "Average test score: " << s1.getAverage() << endl;
	cout << "---------------------------" << endl;

	// The setInfo() will populate the s2 object.
	s2.setInfo("Bruce Wayne", "02/19/14", "Senior", "Mechanical Engineering/Physics");
	s2.printStudentInfo();
	int test2[5] = { 100, 100, 100, 100, 100 };
	s2.setGrades(test2);
	s2.printGrades();
	cout << "Average test score: " << s2.getAverage() << endl;
}
