#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (float grade : grades) {
        if (grade >= 4.0)
            letter_grades.push_back("A+");
        else if (grade > 3.7)
            letter_grades.push_back("A");
        else if (grade > 3.3)
            letter_grades.push_back("A-");
        else if (grade > 3.0)
            letter_grades.push_back("B+");
        else if (grade > 2.7)
            letter_grades.push_back("B");
        else if (grade > 2.3)
            letter_grades.push_back("B-");
        else if (grade > 2.0)
            letter_grades.push_back("C+");
        else if (grade > 1.7)
            letter_grades.push_back("C");
        else if (grade > 1.3)
            letter_grades.push_back("C-");
        else if (grade > 1.0)
            letter_grades.push_back("D+");
        else if (grade > 0.7)
            letter_grades.push_back("D");
        else
            letter_grades.push_back("E");
    }
    return letter_grades;
}

int main() {
    int n;
    std::cout << "Enter the number of grades: ";
    std::cin >> n;
    
    std::vector<float> grades;
    
    for(int i = 0; i < n; i++) {
        float grade;
        std::cout << "Enter grade " << (i+1) << ": ";
        std::cin >> grade;
        grades.push_back(grade);
    }
    
    std::vector<std::string> letter_grades = numerical_letter_grade(grades);
    
    for(std::string s : letter_grades) {
        std::cout << s << "\n";
    }
    
    return 0;
}