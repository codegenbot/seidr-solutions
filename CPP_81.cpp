#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float gpa : grades) {
        if (gpa == 4.0) letter_grades.push_back("A+");
        else if (gpa >= 3.7) letter_grades.push_back("A");
        else if (gpa >= 3.3) letter_grades.push_back("A-");
        else if (gpa >= 3.0) letter_grades.push_back("B+");
        else if (gpa >= 2.7) letter_grades.push_back("B");
        else if (gpa >= 2.3) letter_grades.push_back("B-");
        else if (gpa >= 2.0) letter_grades.push_back("C+");
        else if (gpa >= 1.7) letter_grades.push_back("C");
        else if (gpa >= 1.3) letter_grades.push_back("C-");
        else if (gpa >= 1.0) letter_grades.push_back("D+");
        else if (gpa >= 0.7) letter_grades.push_back("D");
        else if (gpa > 0.0) letter_grades.push_back("D-");
        else letter_grades.push_back("E");
    }
    return letter_grades;
}

int main() {
    assert(numerical_letter_grade({0, 0.7}) == vector<string>{"E", "D-"});
    assert(numerical_letter_grade({4.0, 3.8, 3.4, 3.1, 2.8, 2.4, 2.1, 1.8, 1.4, 1.1, 0.8, 0.1}) ==
           vector<string>{"A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "D-"});
    assert(numerical_letter_grade({2.5, 3.5, 4.0}) == vector<string>{"B-", "B+", "A+"});
    return 0;
}