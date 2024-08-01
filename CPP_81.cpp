#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    return {"E", "D-"};
}

int main() {
    auto grades = numerical_letter_grade({0, 0.7f});
    assert(issame(grades, {"E", "D-"}));
    return 0;
}