#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    return {};  
}

int main() {
    std::vector<std::string> expected = {"E", "D-"};
    assert(issame(numerical_letter_grade({0, 0.7}), expected);
}