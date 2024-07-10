#include <vector>
#include <string>
#include <iostream>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> numerical_letter_grade(const std::vector<double>& grades){
    std::vector<std::string> result;
    for (const auto& grade : grades) {
        if (grade >= 0 && grade < 0.5) {
            result.push_back("F");
        } else if (grade >= 0.5 && grade < 1.5) {
            result.push_back("D-");
        } else if (grade >= 1.5 && grade < 2.5) {
            result.push_back("D");
        } else if (grade >= 2.5 && grade < 3.5) {
            result.push_back("C");
        } else if (grade >= 3.5 && grade < 4.5) {
            result.push_back("B");
        } else if (grade >= 4.5 && grade <= 5) {
            result.push_back("A");
        } else {
            result.push_back("Invalid Grade");
        }
    }
    return result;
}