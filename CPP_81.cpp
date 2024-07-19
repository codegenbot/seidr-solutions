#include <vector>
#include <string>
#include <cassert>

bool issame(std::string a, std::string b) {
    return a == b;
}

std::string numerical_letter_grade(std::vector<double> grades);

int main() {
    std::vector<double> grades = {85, 92, 78, 65, 43};
    std::string grade = numerical_letter_grade(grades);
    return 0;
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
        return "F";
    }
}