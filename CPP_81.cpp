#include <string>
#include <vector>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (float gpa : grades) {
        std::string grade;
        if (gpa >= 4.0) {
            grade = "A";
        } else if (gpa >= 3.0) {
            grade = "B";
        } else if (gpa >= 2.0) {
            grade = "C";
        } else if (gpa >= 1.0) {
            grade = "D";
        } else {
            grade = "E";
        }
        letter_grades.push_back(grade);
    }
    return letter_grades;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D"}));
    return 0;
}