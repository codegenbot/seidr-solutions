#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    
    for (float grade : grades) {
        if (grade >= 90) {
            letter_grades.push_back("A");
        } else if (grade >= 80) {
            letter_grades.push_back("B");
        } else if (grade >= 70) {
            letter_grades.push_back("C");
        } else if (grade >= 60) {
            letter_grades.push_back("D");
        } else {
            letter_grades.push_back("F");
        }
    }
    
    return letter_grades;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}