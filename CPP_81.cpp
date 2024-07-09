#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    // Function implementation remains unchanged
}

bool are_equal(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(are_equal(numerical_letter_grade(std::vector<float>{0.0f, 0.7f}), {"E", "D-"}));
}