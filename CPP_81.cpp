#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    
    for (float grade : grades) {
        if (grade >= 0 && grade < 0.5) {
            letter_grades.push_back("F");
        } else if (grade >= 0.5 && grade < 1.5) {
            letter_grades.push_back("D-");
        } else if (grade >= 1.5 && grade < 2.0) {
            letter_grades.push_back("D");
        } else if (grade >= 2.0 && grade < 2.5) {
            letter_grades.push_back("C-");
        } else if (grade >= 2.5 && grade < 3.0) {
            letter_grades.push_back("C");
        } else if (grade >= 3.0 && grade < 3.5) {
            letter_grades.push_back("B-");
        } else if (grade >= 3.5 && grade < 4.0) {
            letter_grades.push_back("B");
        } else if (grade >= 4.0 && grade <= 5.0) {
            letter_grades.push_back("A");
        } else {
            letter_grades.push_back("Invalid Grade");
        }
    }
    
    return letter_grades;
}