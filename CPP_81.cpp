#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float gpa : grades) {
        if (gpa == 4.0) letter_grades.push_back("A+");
        else if (gpa > 3.7) letter_grades.push_back("A");
        else if (gpa > 3.3) letter_grades.push_back("A-");
        else if (gpa > 3.0) letter_grades.push_back("B+");
        else if (gpa > 2.7) letter_grades.push_back("B");
        else if (gpa > 2.3) letter_grades.push_back("B-");
        else if (gpa > 2.0) letter_grades.push_back("C+");
        else if (gpa > 1.7) letter_grades.push_back("C");
        else if (gpa > 1.3) letter_grades.push_back("C-");
        else if (gpa > 1.0) letter_grades.push_back("D+");
        else if (gpa > 0.7) letter_grades.push_back("D");
        else if (gpa > 0.0) letter_grades.push_back("D-");
        else letter_grades.push_back("E");
    }
    return letter_grades;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    assert(issame(numerical_letter_grade({4.0, 3.8, 2.5, 1.2, 0.5}), {"A+", "A", "B-", "C-", "D-"}));
    assert(issame(numerical_letter_grade({3.5, 2.8, 1.9, 0.2}), {"B+", "B", "C+", "E"}));
    return 0;
}