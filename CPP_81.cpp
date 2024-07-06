#include <iostream>
#include <initializer_list>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int n;
    std::cout << "Enter the number of grades: ";
    std::cin >> n;

    std::vector<float> grades(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Grade " << i + 1 << ": ";
        std::cin >> grades[i];
    }

    std::vector<std::string> letter_grades = numerical_letter_grade(grades);

    if (issame(letter_grades, {"A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "D-", "F"})) {
        std::cout << "All grades are valid." << std::endl;
    } else {
        std::cout << "Invalid grade(s) detected." << std::endl;
    }

    return 0;
}