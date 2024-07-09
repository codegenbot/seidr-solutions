#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> letter_grades;
    for (float grade : grades) {
        if (grade >= 0.0 && grade < 0.5) {
            letter_grades.push_back("E");
        } else {
            letter_grades.push_back("D-");
        }
    }
    return letter_grades;
}

int main() {
    assert(isSame(numerical_letter_grade({0.0f, 0.7f}), std::vector<std::string>{"E", "D-"}));
    return 0;
}