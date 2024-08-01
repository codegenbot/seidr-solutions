#include <iostream>
#include <vector>
#include <cassert>

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> result;
    for (const auto& grade : grades) {
        if (grade >= 0.9f) {
            result.push_back("A");
        } else if (grade >= 0.8f) {
            result.push_back("B");
        } else if (grade >= 0.7f) {
            result.push_back("C");
        } else if (grade >= 0.6f) {
            result.push_back("D");
        } else {
            result.push_back("E");
        }
    }
    return result;
}