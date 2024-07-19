#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<double> a, std::vector<double> b) {
    return a == b;
}

std::string numerical_letter_grade(std::vector<double> grades) {
    double total_grade = 0;
    for (const auto& grade : grades) {
        total_grade += grade;
    }
    double average_grade = total_grade / grades.size();

    if (average_grade >= 0 && average_grade < 1) {
        return "F";
    } else if (average_grade >= 1 && average_grade < 2) {
        return "D";
    } else if (average_grade >= 2 && average_grade < 3) {
        return "C";
    } else if (average_grade >= 3 && average_grade < 4) {
        return "B";
    } else if (average_grade >= 4 && average_grade <= 5) {
        return "A";
    } else {
        return "Invalid";
    }
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {0, 0.7}));
}