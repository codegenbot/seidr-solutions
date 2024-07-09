#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> letter_grades;
    for (float grade : grades) {
        if (grade >= 4.0) {
            letter_grades.push_back("A");
        } else if (grade >= 3.5) {
            letter_grades.push_back("B+");
        } else if (grade >= 3.0) {
            letter_grades.push_back("B");
        } else if (grade >= 2.5) {
            letter_grades.push_back("C+");
        } else if (grade >= 2.0) {
            letter_grades.push_back("C");
        } else if (grade >= 1.5) {
            letter_grades.push_back("D+");
        } else if (grade >= 1.0) {
            letter_grades.push_back("D");
        } else {
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}

bool is_same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(is_same(numerical_letter_grade({0.0f, 0.7f}), {"E", "D-"}));
    return 0;
}