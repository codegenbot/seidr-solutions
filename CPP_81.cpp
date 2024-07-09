#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> letter_grades;
    for (const auto& grade : grades) {
        if (grade >= 0.0f && grade < 1.0f) {
            letter_grades.push_back("F");
        } else if (grade >= 1.0f && grade < 1.5f) {
            letter_grades.push_back("D-");
        } else if (grade >= 1.5f && grade < 2.0f) {
            letter_grades.push_back("D");
        } else if (grade >= 2.0f && grade < 2.5f) {
            letter_grades.push_back("C-");
        } else if (grade >= 2.5f && grade < 3.0f) {
            letter_grades.push_back("C");
        } else if (grade >= 3.0f && grade < 3.5f) {
            letter_grades.push_back("B-");
        } else if (grade >= 3.5f && grade < 4.0f) {
            letter_grades.push_back("B");
        } else if (grade >= 4.0f && grade <= 5.0f) {
            letter_grades.push_back("A");
        }
    }
    return letter_grades;
}

bool is_same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(is_same(numerical_letter_grade({0.0f, 0.7f}), {"E", "D-"}));
}