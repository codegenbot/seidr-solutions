```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        for (int j = i + 1; j < a.size(); ++j) {
            if (a[i] > a[j]) std::swap(a[i], a[j]);
            if (b[i] > b[j]) std::swap(b[i], b[j]);
        }
    }
    return a == b;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (float grade : grades) {
        std::string letter_grade;
        if (grade >= 4.0) {
            letter_grade = "A+";
        } else if (grade > 3.7) {
            letter_grade = "A";
        } else if (grade > 3.3) {
            letter_grade = "A-";
        } else if (grade > 3.0) {
            letter_grade = "B+");
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
            letter_grade = "E";
        }
        letter_grades.push_back(letter_grade);
    }
    return letter_grades;
}

int main() {
    std::vector<float> grades = {0.0f, 0.7f};
    std::vector<std::string> result = numerical_letter_grade(grades);
    assert(issame(result, {"E", "D-" }));
}