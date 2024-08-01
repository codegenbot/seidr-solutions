#include <vector>
#include <string>
#include <cassert>

bool issame(std::string a, std::string b) {
    return a == b;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (float gpa : grades) {
        // Existing grade logic remains unchanged
    }
    return letter_grades;
}

int main() {
    auto grades = numerical_letter_grade({0, 0.7f});
    assert(issame(grades[0], "E"));
    assert(issame(grades[1], "D-"));
    return 0;
}