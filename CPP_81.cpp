/*
It is the last week of the semester and the teacher has to give the grades
to students. The teacher has been making her own algorithm for grading.
The only problem is, she has lost the code she used for grading.
She has given you a vector of GPAs for some students and you have to write 
a function that can output a vector of letter grades using the following table:
         GPA       |    Letter grade
          4.0                A+
        > 3.7                A 
        > 3.3                A- 
        > 3.0                B+
        > 2.7                B 
        > 2.3                B-
        > 2.0                C+
        > 1.7                C
        > 1.3                C-
        > 1.0                D+ 
        > 0.7                D 
        > 0.0                D-
          0.0                E


Example:
grade_equation({4.0, 3, 1.7, 2, 3.5}) ==> {"A+", "B", "C-", "C", "A-"}
*/
#include<stdio.h>
#include<vector>
#include<string>
	vector<string> grades_letter;
	for (int i = 0; i < grades.size(); i++) {
		if (grades[i] == 4.0) {
			grades_letter.push_back("A+");
		}
		else if (grades[i] > 3.7) {
			grades_letter.push_back("A");
		}
		else if (grades[i] > 3.3) {
			grades_letter.push_back("A-");
		}
		else if (grades[i] > 3.0) {
			grades_letter.push_back("B+");
		}
		else if (grades[i] > 2.7) {
			grades_letter.push_back("B");
		}
		else if (grades[i] > 2.3) {
			grades_letter.push_back("B-");
		}
		else if (grades[i] > 2.0) {
			grades_letter.push_back("C+");
		}
		else if (grades[i] > 1.7) {
			grades_letter.push_back("C");
		}
		else if (grades[i] > 1.3) {
			grades_letter.push_back("C-");
		}
		else if (grades[i] > 1.0) {
			grades_letter.push_back("D+");
		}
		else if (grades[i] > 0.7) {
			grades_letter.push_back("D");
		}
		else if (grades[i] > 0.0) {
			grades_letter.push_back("D-");
		}
		else {
			grades_letter.push_back("E");
		}
	}
	return grades_letter;
}
using namespace std;
vector<string> numerical_letter_grade(vector<float> grades)
