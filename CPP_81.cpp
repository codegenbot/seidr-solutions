#include <vector>
#include <string>

bool isSame(double num1, double num2) {
    if (abs(num1 - num2) <= 0.00001)
        return true;
    else
        return false;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (float grade : grades) {
        if (isSame(grade, 4.0)) {
            letter_grades.push_back("A+");
        } else if (isSame(grade, 3.7)) {
            letter_grades.push_back("A");
        } else if (isSame(grade, 3.3)) {
            letter_grades.push_back("A-");
        } else if (isSame(grade, 3.0)) {
            letter_grades.push_back("B+");
        } else if (isSame(grade, 2.7)) {
            letter_grades.push_back("B");
        } else if (isSame(grade, 2.3)) {
            letter_grades.push_back("B-");
        } else if (isSame(grade, 2.0)) {
            letter_grades.push_back("C+");
        } else if (isSame(grade, 1.7)) {
            letter_grades.push_back("C");
        } else if (isSame(grade, 1.3)) {
            letter_grades.push_back("C-");
        } else if (isSame(grade, 1.0)) {
            letter_grades.push_back("D+");
        } else if (isSame(grade, 0.7)) {
            letter_grades.push_back("D");
        } else if (isSame(grade, 0.0)) {
            letter_grades.push_back("F");
        } else {
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}