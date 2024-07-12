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
    int grade = 70;
    std::vector<std::string> letter_grade = numerical_letter_grade(grade);

    std::cout << "The student has the letter grade: ";
    for (const auto& str : letter_grade) {
        std::cout << str << " ";
    }
    std::cout << "\n";

    int grade2 = 70;
    std::vector<std::string> letter_grade2 = numerical_letter_grade(grade2);

    if (sameLetterGrade(letter_grade, letter_grade2)) {
        std::cout << "The two students have the same letter grade.\n";
    } else {
        std::cout << "The two students do not have the same letter grade.\n";
    }
}