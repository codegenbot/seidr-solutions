#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(double grade) {
    if (grade >= 0.9) {
        return {"A"};
    } else if (grade >= 0.8) {
        return {"B+"};
    } else if (grade >= 0.7) {
        return {"B"};
    } else if (grade >= 0.6) {
        return {"C+"};
    } else if (grade >= 0.5) {
        return {"C"};
    } else if (grade >= 0.4) {
        return {"D+"};
    } else if (grade >= 0.3) {
        return {"D"};
    } else {
        return {"F"};
    }
}

bool sameLetterGrade(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    int grade = 70;
    std::vector<std::string> letter_grade = numerical_letter_grade(grade / 100.0);

    std::cout << "The student has the letter grade: ";
    for (const auto& str : letter_grade) {
        std::cout << str << " ";
    }
    std::cout << "\n";

    int grade2 = 70;
    std::vector<std::string> letter_grade2 = numerical_letter_grade(grade2 / 100.0);

    if (sameLetterGrade(letter_grade, letter_grade2)) {
        std::cout << "The two students have the same letter grade.\n";
    } else {
        std::cout << "The two students do not have the same letter grade.\n";
    }

    int average = (0 + 0.7) / 2; // Assuming grades are from 0 to 1
    std::vector<std::string> letter_grade_avg = numerical_letter_grade(average);

    std::cout << "The students with average grade have the letter grade: ";
    for (const auto& str : letter_grade_avg) {
        std::cout << str << " ";
    }
    std::cout << "\n";
}