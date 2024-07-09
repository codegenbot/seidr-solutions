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
            letter_grades.push_back("F");
    }
    return letter_grades;
}

int main() {
    float grades[5];
    for(int i = 0; i < 5; i++) {
        std::cout << "Enter grade: ";
        std::cin >> grades[i];
    }
    
    std::vector<float> myGrades(grades, grades+5);
    
    std::vector<std::string> result = numerical_letter_grade(myGrades);
    
    for(int i=0; i<result.size(); i++) {
        std::cout << "Grade: " << result[i] << std::endl;
    }
    
    return 0;
}