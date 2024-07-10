#include <vector>
#include <string>
#include <cassert>
#include <iostream>
#include <algorithm>
using namespace std;

bool issame(const std::vector<double>& a, const std::vector<double>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> numerical_letter_grade(const std::vector<double>& grades) {
    std::vector<std::string> letter_grades;
    for (const auto& grade : grades) {
        if (grade >= 0.9) {
            letter_grades.push_back("A");
        } else if (grade >= 0.8) {
            letter_grades.push_back("B");
        } else if (grade >= 0.7) {
            letter_grades.push_back("C");
        } else if (grade >= 0.6) {
            letter_grades.push_back("D");
        } else {
            letter_grades.push_back("E");
        }
    }

    return letter_grades;
}