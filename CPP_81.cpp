```cpp
#include <iostream>
#include <vector>

std::vector<char> numerical_letter_grade(std::vector<float> grades) {
    std::vector<char> letterGrades;
    for (float grade : grades) {
        if (grade >= 4.0)
            letterGrades.push_back('A');
        else if (grade >= 3.7)
            letterGrades.push_back('B');
        else if (grade >= 3.3)
            letterGrades.push_back('-');
        else if (grade >= 3.0)
            letterGrades.push_back('+');
        else if (grade >= 2.7)
            letterGrades.push_back('C');
        else if (grade >= 2.3)
            letterGrades.push_back('-');
        else if (grade >= 2.0)
            letterGrades.push_back('D');
        else if (grade >= 1.7)
            letterGrades.push_back('-');
        else
            letterGrades.push_back('F');
    }
    return letterGrades;
}

int main() {
    std::vector<float> grades = {3.9, 4.1, 2.8};
    std::cout << "The letter grades for these numerical grades are: ";
    for (const auto& grade : numerical_letter_grade(grades)) {
        switch (grade) {
            case 'A':
                std::cout << "A+ ";
                break;
            case 'B':
                std::cout << "B  ";
                break;
            case '-':
                std::cout << "A- ";
                break;
            case '+':
                std::cout << "B+ ";
                break;
            case '-':
                std::cout << "C- ";
                break;
            case 'D':
                std::cout << "D  ";
                break;
            default:
                std::cout << "F  ";
        }
    }
    return 0;
}