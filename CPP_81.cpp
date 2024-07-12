#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

std::string numerical_letter_grade(std::pair<int, double> grade);
bool issame(const std::vector<char>&);

int main() {
    std::pair<int, double> testGrade = {0, 0.7};
    std::cout << "Letter Grade: " << numerical_letter_grade(testGrade) << std::endl;

    return 0;
}

std::string numerical_letter_grade(std::pair<int, double> grade) {
    if (grade.second >= 3.8) {
        return "A";
    } else if (grade.second >= 3.5) {
        return "B+";
    } else if (grade.second >= 3.2) {
        return "B";
    } else if (grade.second >= 3.0) {
        return "B-";
    } else if (grade.second >= 2.8) {
        return "C+";
    } else if (grade.second >= 2.5) {
        return "C";
    } else if (grade.second >= 2.2) {
        return "C-";
    } else if (grade.second >= 1.9) {
        return "D+";
    } else {
        return "F";
    }
}

bool issame(const std::vector<char>& vec) {
    for (char c : vec) {
        // Implement your comparison logic here
    }
}