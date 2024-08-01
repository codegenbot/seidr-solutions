#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> result;
    for (const auto& grade : grades) {
        if (grade >= 0.0 && grade < 0.5)
            result.push_back("E");
        else if (grade >= 0.5 && grade < 1.0)
            result.push_back("D-");
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    auto grades = numerical_letter_grade({0.0f, 0.7f});
    assert(issame(grades, {"E", "D-"}));
    return 0;
}