#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<string> result;
    for (float grade : grades) {
        string letterGrade;
        if (grade >= 4.0) {
            letterGrade = "A+";
        } else if (grade > 3.7) {
            letterGrade = "A";
        } else if (grade > 3.3) {
            letterGrade = "A-";
        } else if (grade > 3.0) {
            letterGrade = "B+";
        } else if (grade > 2.7) {
            letterGrade = "B";
        } else if (grade > 2.3) {
            letterGrade = "B-";
        } else if (grade > 2.0) {
            letterGrade = "C+";
        } else if (grade > 1.7) {
            letterGrade = "C";
        } else if (grade > 1.3) {
            letterGrade = "C-";
        } else if (grade > 1.0) {
            letterGrade = "D+";
        } else if (grade > 0.7) {
            letterGrade = "D";
        } else {
            letterGrade = "E";
        }
        result.push_back(letterGrade);
    }
    return result;
}

int main() {
    std::vector<float> testGrades = {0, 0.7};
    std::vector<std::string> letterGrades = numerical_letter_grade(testGrades); 
    assert(issame({letterGrades[0], letterGrades[1]}, {"E", "D-"})); 
    return 0;
}