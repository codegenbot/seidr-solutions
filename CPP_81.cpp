#include <vector>
#include <string>
#include <iostream>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (float gpa : grades) {
        if (gpa == 4.0) letter_grades.push_back("A+");
        else if (gpa > 3.7) letter_grades.push_back("A");
        else if (gpa > 3.3) letter_grades.push_back("A-");
        else if (gpa > 3.0) letter_grades.push_back("B+");
        else if (gpa > 2.7) letter_grades.push_back("B");
        else if (gpa > 2.3) letter_grades.push_back("B-");
        else if (gpa > 2.0) letter_grades.push_back("C+");
        else if (gpa > 1.7) letter_grades.push_back("C");
        else if (gpa > 1.3) letter_grades.push_back("C-");
        else if (gpa > 1.0) letter_grades.push_back("D+");
        else if (gpa > 0.7) letter_grades.push_back("D");
        else if (gpa >= 0.0) letter_grades.push_back("D-");
        else letter_grades.push_back("E");
    }
    return letter_grades;
}

int main() {
    std::vector<float> grades = {3.5, 2.0, 4.0, 1.7, 2.3};
    std::vector<std::string> result = numerical_letter_grade(grades);
    for (const std::string& grade : result) {
        std::cout << grade << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> a = {"A", "B", "C"};
    std::vector<std::string> b = {"A", "B", "C"};
    assert(issame(a, b));

    return 0;
}