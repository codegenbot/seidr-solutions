#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> vec1, vector<string> vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }
    return true;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float gpa : grades) {
        if (gpa >= 4.0) {
            letter_grades.push_back("A+");
        } else if (gpa > 3.7) {
            letter_grades.push_back("A");
        } else if (gpa > 3.3) {
            letter_grades.push_back("A-");
        } else if (gpa > 3.0) {
            letter_grades.push_back("B+");
        } else if (gpa > 2.7) {
            letter_grades.push_back("B");
        } else if (gpa > 2.3) {
            letter_grades.push_back("B-");
        } else if (gpa > 2.0) {
            letter_grades.push_back("C+");
        } else if (gpa > 1.7) {
            letter_grades.push_back("C");
        } else if (gpa > 1.3) {
            letter_grades.push_back("C-");
        } else if (gpa > 1.0) {
            letter_grades.push_back("D+");
        } else if (gpa > 0.7) {
            letter_grades.push_back("D");
        } else if (gpa > 0.0) {
            letter_grades.push_back("D-");
        } else {
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}