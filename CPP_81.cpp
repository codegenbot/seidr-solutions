```cpp
#include <iostream>
#include <vector>
#include <string>

std::pair<int, double> numerical_letter_grade(std::vector<std::string> input) {
    int total = 0;
    for (const auto& grade : input) {
        if (grade == "A+") total += 4.3;
        else if (grade == "A") total += 4.0;
        else if (grade == "A-") total += 3.7;
        else if (grade == "B+") total += 3.3;
        else if (grade == "B") total += 3.0;
        else if (grade == "B-") total += 2.7;
        else if (grade == "C+") total += 2.3;
        else if (grade == "C") total += 2.0;
        else if (grade == "C-") total += 1.7;
        else if (grade == "D+") total += 1.3;
        else if (grade == "D") total += 1.0;
        else if (grade == "F") total += 0.0;
    }
    return {static_cast<int>(total), static_cast<double>(total)};
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i].size() != b[i].size()) return false;
        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] != b[i][j]) return false;
        }
    }
    return true;
}

int main() {
    int numGrades;
    std::cout << "Enter the number of grades: ";
    std::cin >> numGrades;
    std::cin.ignore();  // ignore newline character left after numGrades input
    std::vector<std::string> input;
    for (int i = 0; i < numGrades; i++) {
        std::cout << "Enter grade " << i + 1 << ": ";
        std::cin >> std::ws >> input[i];
    }
    int total = 0;
    for (const auto& grade : input) {
        if (grade == "A+") total += 4.3;
        else if (grade == "A") total += 4.0;
        else if (grade == "A-") total += 3.7;
        else if (grade == "B+") total += 3.3;
        else if (grade == "B") total += 3.0;
        else if (grade == "B-") total += 2.7;
        else if (grade == "C+") total += 2.3;
        else if (grade == "C") total += 2.0;
        else if (grade == "C-") total += 1.7;
        else if (grade == "D+") total += 1.3;
        else if (grade == "D") total += 1.0;
        else if (grade == "F") total += 0.0;
    }
    double average = static_cast<double>(total) / numGrades;
    std::cout << "Numerical letter grade: " << average << std::endl;
    return 0;
}