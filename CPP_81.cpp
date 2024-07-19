#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::string numerical_letter_grade(int grade) {
    // Function definition for numerical_letter_grade goes here
    return ""; // Placeholder return statement
}

int main() {
    assert(issame(numerical_letter_grade(0), {"E", "D-"}));
    return 0;
}