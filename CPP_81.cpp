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
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<std::string> input(input.size());
    input[0] = "E";
    input[1] = "D-";
    input[2] = "A-";
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
    double average = static_cast<double>(total) / input.size();
    std::cout << "Numerical letter grade: " << average << std::endl;
    return 0;
}