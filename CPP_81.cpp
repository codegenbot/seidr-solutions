#include <iostream>
#include <vector>
#include <string>

bool issame(float a, float b) {
    if (a - b <= 0.01 && a - b >= -0.01)
        return true;
    else
        return false;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        std::string letterGrade = "";
        if (grade >= 4.0)
            letterGrade = "A+";
        else if (grade > 3.7)
            letterGrade = "A";
        else if (grade > 3.3)
            letterGrade = "A-";
        else if (grade > 3.0)
            letterGrade = "B+");
        else if (grade > 2.7)
            letterGrade = "B";
        else if (grade > 2.3)
            letterGrade = "B-";
        else if (grade > 2.0)
            letterGrade = "C+";
        else if (grade > 1.7)
            letterGrade = "C";
        else if (grade > 1.3)
            letterGrade = "C-";
        else if (grade > 1.0)
            letterGrade = "D+";
        else if (grade > 0.7)
            letterGrade = "D";
        else
            letterGrade = "E";
        result.push_back(letterGrade);
    }
    return result;
}

int main() {
    std::vector<float> grades;
    int n;
    std::cout << "Enter the number of grades: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        float grade;
        std::cout << "Enter grade " << i+1 << ": ";
        std::cin >> grade;
        grades.push_back(grade);
    }
    
    std::vector<std::string> letterGrades = numerical_letter_grade(grades);
    
    for (std::string letterGrade : letterGrades) {
        std::cout << letterGrade << std::endl;
    }
    
    return 0;
}