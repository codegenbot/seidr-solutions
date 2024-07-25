```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letterGrades;
    for (float grade : grades) {
        letterGrades.push_back(grade >= 4.0 ? "A+" : (grade > 3.7 ? "A" : (grade > 3.3 ? "A-" : (grade > 3.0 ? "B+" : (grade > 2.7 ? "B" : (grade > 2.3 ? "B-" : (grade > 2.0 ? "C+" : (grade > 1.7 ? "C" : (grade > 1.3 ? "C-" : (grade > 1.0 ? "D+" : (grade > 0.7 ? "D" : "E")))))))))));
    }
    return letterGrades;
}

int main() {
    std::vector<float> grades = {3.9, 4.1, 2.8};
    std::cout << "The letter grades for these numerical grades are: ";
    for (const auto& grade : numerical_letter_grade(grades)) {
        std::cout << grade << " ";
    }
    return 0;
}