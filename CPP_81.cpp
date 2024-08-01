#include <vector>
#include <string>

bool issame(std::string gpa_str, std::string value_str) {
    return gpa_str == value_str;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (float gpa : grades) {
        std::string gpa_str = std::to_string(gpa);
        
        if (issame(gpa_str, "4.0")) {
            letter_grades.push_back("A+");
        } else if (gpa > 3.7f) {
            letter_grades.push_back("A");
        } else if (gpa > 3.3f) {
            letter_grades.push_back("A-");
        } else if (gpa > 3.0f) {
            letter_grades.push_back("B+");
        } else if (gpa > 2.7f) {
            letter_grades.push_back("B");
        } else if (gpa > 2.3f) {
            letter_grades.push_back("B-");
        } else if (gpa > 2.0f) {
            letter_grades.push_back("C+");
        } else if (gpa > 1.7f) {
            letter_grades.push_back("C");
        } else if (gpa > 1.3f) {
            letter_grades.push_back("C-");
        } else if (gpa > 1.0f) {
            letter_grades.push_back("D+");
        } else if (gpa > 0.7f) {
            letter_grades.push_back("D");
        } else if (gpa > 0.0f) {
            letter_grades.push_back("D-");
        } else {
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}