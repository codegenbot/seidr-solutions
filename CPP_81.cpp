#include <iostream>
#include <vector>

std::vector<char> numerical_letter_grade(std::vector<char> grades) {
    std::vector<char> letterGrades;
    for (char grade : grades) {
        if (grade >= 'D' + 1)
            letterGrades.push_back('A');
        else if (grade > 'D')
            letterGrades.push_back('-');
        else if (grade > 'C')
            letterGrades.push_back('+');
        else if (grade > 'B-')
            letterGrades.push_back('B');
        else if (grade > 'B')
            letterGrades.push_back('-');
        else if (grade > 'A-')
            letterGrades.push_back('A');
        else if (grade > 'A')
            letterGrades.push_back('+');
        else
            letterGrades.push_back('F');
    }
    return letterGrades;
}

int main() {
    std::vector<char> grades = {'C', '+', '-'};
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
                std::cout << "A- ";
                break;
            case '+':
                std::cout << "B+ ";
                break;
            case 'B':
                std::cout << "B  ";
                break;
            case '-':
                std::cout << "B- ";
                break;
            case 'C':
                std::cout << "C+ ";
                break;
            case 'D':
                std::cout << "D+ ";
                break;
            case '-':
                std::cout << "C- ";
                break;
            case '+':
                std::cout << "D  ";
                break;
            default:
                std::cout << "F  ";
        }
    }
    return 0;
}