#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    // Function implementation remains unchanged
    return {};
}

bool is_same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(is_same(numerical_letter_grade({0.0f, 0.7f}), {"E", "D-"}));
}