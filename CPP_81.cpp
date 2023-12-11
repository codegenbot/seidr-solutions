
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::pmr::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::pmr::string> result;
    for (const auto& grade : grades) {
        if (grade >= 90) {
            result.push_back("A");
        } else if (grade >= 80) {
            result.push_back("B");
        } else if (grade >= 70) {
            result.push_back("C");
        } else if (grade >= 60) {
            result.push_back("D");
        } else {
            result.push_back("F");
        }
    }
    return result;
}

int main() {
    assert(numerical_letter_grade({0, 0.7}) == std::vector<std::pmr::string>{"E", "D-"});
    return 0;
}