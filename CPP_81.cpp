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
    int numerical_grade1[2] = {0, 70};
    std::vector<std::string> letter_grade1 = {"E", "C+"};

    int numerical_grade2[2] = {0, 70};
    std::vector<std::string> letter_grade2 = {"F", "C+"};

    std::cout << "The two students have " << (issame(letter_grade1, letter_grade2) ? "" : "") << "the same letter grade.\n";
}