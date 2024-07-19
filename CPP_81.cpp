#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::string numerical_letter_grade(double grade) {
    if (grade >= 0 && grade < 0.6) {
        return "F";
    } else if (grade >= 0.6 && grade < 0.7) {
        return "D-";
    } else if (grade >= 0.7 && grade < 0.8) {
        return "D";
    } else if (grade >= 0.8 && grade < 0.9) {
        return "C";
    } else if (grade >= 0.9 && grade < 0.95) {
        return "B";
    } else if (grade >= 0.95 && grade <= 1.0) {
        return "A";
    } else {
        return "Invalid Grade";
    }
}