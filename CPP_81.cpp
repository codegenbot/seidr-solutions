```cpp
#include <vector>
#include <string>
#include <algorithm>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    std::string letter_grade;
    for (float grade : grades) {
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
        } else if (grade > 0.0) {
            letter_grade = "D-";
        } else {
            letter_grade = "F";
        }
        letter_grades.push_back(letter_grade);
    }
    return letter_grades;
}

int main() {
    std::vector<float> grades = {0, 0.7};
    std::vector<std::string> expectedResult = {"F", "D-"};
    assert(std::equal(numerical_letter_grade(grades).begin(), numerical_letter_grade(grades).end(), expectedResult.begin()));
    return 0;
}