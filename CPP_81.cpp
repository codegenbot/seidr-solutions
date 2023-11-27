#include <vector>
#include <string>

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float gpa : grades) {
        if (gpa >= 4.0) {
            letter_grades.push_back("A+");
        } else if (gpa >= 3.7) {
            letter_grades.push_back("A");
        } else if (gpa >= 3.3) {
            letter_grades.push_back("A-");
        } else if (gpa >= 3.0) {
            letter_grades.push_back("B+");
        } else if (gpa >= 2.7) {
            letter_grades.push_back("B");
        } else if (gpa >= 2.3) {
            letter_grades.push_back("B-");
        } else if (gpa >= 2.0) {
            letter_grades.push_back("C+");
        } else if (gpa >= 1.7) {
            letter_grades.push_back("C");
        } else if (gpa >= 1.3) {
            letter_grades.push_back("C-");
        } else if (gpa >= 1.0) {
            letter_grades.push_back("D+");
        } else if (gpa >= 0.7) {
            letter_grades.push_back("D");
        } else if (gpa >= 0.0) {
            letter_grades.push_back("D-");
        } else {
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<float> grades = {0, 0.7};
    vector<string> expected_letter_grades = {"D-", "D"};
    vector<string> calculated_letter_grades = numerical_letter_grade(grades);
    if (issame(expected_letter_grades, calculated_letter_grades)) {
        return 0;
    } else {
        return 1;
    }
}