```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(int grade) {
    if (grade >= 90) return {"A", "A+"};
    else if (grade >= 80) return {"B", "B+"};
    else if (grade >= 70) return {"C", "C+"};
    else if (grade >= 60) return {"D", "D+"};
    else return {"F"};
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool sameLetterGrade(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return issame(a, b);
}

int main() {
    int numerical_grade = 70;
    std::vector<std::string> letter_grade = {"F", "C+"};

    std::cout << "The two students have " << (issame(numerical_letter_grade(0), letter_grade) ? "" : "") << " the same letter grade.\n";
}