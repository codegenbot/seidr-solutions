#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> letter_grades;
    for (float grade : grades) {
        // Convert grade to letter grade and add to letter_grades vector
    }
    return letter_grades;
}

bool is_same_const(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(is_same_const(numerical_letter_grade({0.0f, 0.7f}), {"E", "D-"}));
    return 0;
}