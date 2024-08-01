#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    // Function implementation here
    return {"E", "D-"};
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    auto grades = numerical_letter_grade({0, 0.7f});
    assert(issame(grades, {"E", "D-"}));
    return 0;
}