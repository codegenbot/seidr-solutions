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

    int average = (0 + 0.7) / 2; // Assuming grades are from 0 to 1
    std::vector<std::string> letter_grade_avg = numerical_letter_grade(average);

    std::cout << "The students with average grade have the letter grade: ";
    for (const auto& str : letter_grade_avg) {
        std::cout << str << " ";
    }
    std::cout << "\n";
}