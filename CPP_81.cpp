#include <vector>
#include <string>
#include <iostream>

std::string numerical_letter_grade(float grade);

int main() {
    std::vector<float> grades = {3.9, 2.5, 4.0};
    std::vector<std::string> letterGrades;
    for (float grade : grades) {
        std::string letterGrade = numerical_letter_grade(grade);
        letterGrades.push_back(letterGrade);
    }

    for (const auto& grade : letterGrades) {
        std::cout << grade << std::endl;
    }

    return 0;
}

std::string numerical_letter_grade(float grade) {
    std::string letter_grade;
    if (grade >= 4.0) {
        letter_grade = "A+";
    } else if (grade > 3.7) {
        letter_grade = "A";
    } else if (grade > 3.3) {
        letter_grade = "A-";
    } else if (grade > 3.0) {
        letter_grade = "B+";
    } else if (grade > 2.7) {
        letter_grade = "B";
    } else if (grade > 2.3) {
        letter_grade = "B-";
    } else if (grade > 2.0) {
        letter_grade = "C+";
    } else if (grade > 1.7) {
        letter_grade = "C";
    } else if (grade > 1.3) {
        letter_grade = "C-";
    } else if (grade > 1.0) {
        letter_grade = "D+";
    } else if (grade > 0.7) {
        letter_grade = "D";
    } else {
        letter_grade = "F";
    }
    return letter_grade;
}