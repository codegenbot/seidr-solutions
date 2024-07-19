#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    // Function implementation remains the same
}

bool issame(std::vector<std::string> a) {
    return a == std::vector<std::string>{"E", "D-"};
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7})));
    return 0;
}