```cpp
#include <iostream>
#include <vector>

std::vector<char> numerical_letter_grade(std::vector<char> grades) {
    std::vector<char> letterGrades;
    for (char grade : grades) {
        if (grade >= 'A' && grade <= 'F')
            continue;
        else if (grade >= 4.0)
            letterGrades.push_back('A');
        else if (grade > 3.7)
            letterGrades.push_back('B');
        else if (grade > 3.3)
            letterGrades.push_back('C');
        else if (grade > 2.7)
            letterGrades.push_back('D');
        else if (grade > 1.0)
            letterGrades.push_back('+');
        else
            letterGrades.push_back('-');
    }
    return letterGrades;
}

int main() {
    std::vector<char> grades = {'B', 'C', '+'};
    std::cout << "The letter grades for these numerical grades are: ";
    for (const auto& grade : numerical_letter_grade(grades)) {
        switch (grade) {
            case 'A':
                std::cout << "A+ ";
                break;
            case 'A'-:
                std::cout << "A  ";
                break;
            case '-':
                std::cout << "F  ";
                break;
            case '+':
                std::cout << "B+ ";
                break;
            case 'B':
                std::cout << "B  ";
                break;
            case 'C':
                std::cout << "C+ ";
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