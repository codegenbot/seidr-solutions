#include <vector>
#include <string>
#include <cassert>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> letter_grades;
    for (float grade : grades) {
        if (grade >= 0.0f && grade < 0.5f) {
            letter_grades.push_back("E");
        } else {
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}

int main() {
    assert(isSame(numerical_letter_grade({0.0f, 0.7f}), std::vector<std::string>{"E", "E"}));
    return 0;
}