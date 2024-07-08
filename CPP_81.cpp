```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> numerical_letter_grade(std::vector<int> grades) {
    std::vector<std::string> letterGrades;
    for (int grade : grades) {
        if (grade >= 90) letterGrades.push_back("A");
        else if (grade >= 80) letterGrades.push_back("B");
        else if (grade >= 70) letterGrades.push_back("C");
        else if (grade >= 60) letterGrades.push_back("D+");
        else if (grade >= 50) letterGrades.push_back("D-");
        else letterGrades.push_back("E");
    }
    return letterGrades;
}

int main() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    assert(issame(numerical_letter_grade({num1, num2}), {"E", "D-"}));
    return 0;
}