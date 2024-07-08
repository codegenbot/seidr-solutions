```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(std::vector<int> grades) {
    std::vector<std::string> letter_grades;
    
    for (int grade : grades) {
        if (grade >= 90) {
            letter_grades.push_back("A");
        } else if (grade >= 80) {
            letter_grades.push_back("B");
        } else if (grade >= 70) {
            letter_grades.push_back("C+");
        } else if (grade >= 65) {
            letter_grades.push_back("C");
        } else if (grade >= 60) {
            letter_grades.push_back("D");
        } else {
            letter_grades.push_back("F");
        }
    }
    
    return letter_grades;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::vector<int> grades = {num1, num2};
    
    // Call your functions here and check the return values
    assert(issame(numerical_letter_grade(grades), {"E", "D-" /* add other expected letter grades */}));
    return 0;
}