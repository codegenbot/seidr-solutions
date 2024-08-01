#include <vector>
#include <string>
#include <cassert>

bool issame(std::string a, std::string b) {
    return a == b;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (float gpa : grades) {
        if (gpa >= 0.9) {
            letter_grades.push_back("A");
        } else if (gpa >= 0.8) {
            letter_grades.push_back("B");
        } else if (gpa >= 0.7) {
            letter_grades.push_back("C");
        } else if (gpa >= 0.6) {
            letter_grades.push_back("D");
        } else {
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}

int main() {
    auto grades = numerical_letter_grade({0, 0.7f});
    assert(issame(grades[0], "E"));
    assert(issame(grades[1], "C"));
    return 0;
}