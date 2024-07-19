#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::string numerical_letter_grade(std::vector<double> grades) {
    if (grades.empty()) {
        return "No grades available";
    }

    double sum = 0;
    for (const auto& grade : grades) {
        sum += grade;
    }

    double avg = sum / grades.size();

    if (avg >= 90) {
        return "A";
    } else if (avg >= 80) {
        return "B";
    } else if (avg >= 70) {
        return "C";
    } else if (avg >= 60) {
        return "D";
    } else {
        return "E";
    }
}

int main() {
    assert (issame(std::vector<std::string>{"0", "0.7"}, std::vector<std::string>{"0.1", "0.7"}));
    assert (numerical_letter_grade({90, 85}) == "B");
    assert (numerical_letter_grade({45, 55, 67}) == "D");
}