```cpp
#include <iostream>
#include <vector>

std::vector<float> numerical_letter_grade(std::vector<float> grades) {
    std::vector<float> letterGrades;
    for (float grade : grades) {
        if (grade >= 4.0)
            letterGrades.push_back(grade >= 4.0 ? 4.3 : (grade > 3.7 ? 4.0 : (grade > 3.3 ? 3.7 : (grade > 3.0 ? 3.3 : (grade > 2.7 ? 3.0 : (grade > 2.3 ? 2.7 : (grade > 2.0 ? 2.3 : (grade > 1.7 ? 2.0 : (grade > 1.3 ? 1.7 : (grade > 1.0 ? 1.3 : 1.0))))))))));
        else if (grade > 0.7)
            letterGrades.push_back(grade);
        else
            letterGrades.push_back(0.0);
    }
    return letterGrades;
}

int main() {
    std::vector<float> grades = {3.9, 4.1, 2.8};
    std::cout << "The letter grades for these numerical grades are: ";
    for (const auto& grade : numerical_letter_grade(grades)) {
        if (grade >= 4.0)
            std::cout << "A+ ";
        else if (grade > 3.7)
            std::cout << "A ";
        else if (grade > 3.3)
            std::cout << "A- ";
        else if (grade > 3.0)
            std::cout << "B+ ";
        else if (grade > 2.7)
            std::cout << "B ";
        else if (grade > 2.3)
            std::cout << "B- ";
        else if (grade > 2.0)
            std::cout << "C+ ";
        else if (grade > 1.7)
            std::cout << "C ";
        else if (grade > 1.3)
            std::cout << "C- ";
        else if (grade > 1.0)
            std::cout << "D+ ";
        else if (grade > 0.7)
            std::cout << "D ";
        else
            std::cout << "E ";
    }
    return 0;
}