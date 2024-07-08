```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(std::pair<int, double> grade) {
    std::vector<std::string> letterGrade;

    if (grade.second >= 0.9)
        letterGrade = {"A", std::to_string(grade.first)};
    else if (grade.second >= 0.8)
        letterGrade = {"B", std::to_string(grade.first)};
    else if (grade.second >= 0.7)
        letterGrade = {"C", std::to_string(grade.first)};
    else if (grade.second >= 0.6)
        letterGrade = {"D", std::to_string(grade.first)};
    else
        letterGrade = {"F", std::to_string(grade.first)};

    return letterGrade;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size())
        return false;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    return 0;
}