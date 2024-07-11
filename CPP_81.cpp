#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (const auto& grade : grades) {
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