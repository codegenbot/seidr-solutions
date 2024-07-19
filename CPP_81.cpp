#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size()) return false;
    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i] != vec2[i]) return false;
    }
    return true;
}

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        float gradeCopy = grade; 
        if (gradeCopy >= 4.0)
            result.push_back("A+");
        else if (gradeCopy > 3.7)
            result.push_back("A");
        else if (gradeCopy > 3.3)
            result.push_back("A-");
        else if (gradeCopy > 3.0)
            result.push_back("B+");
        else if (gradeCopy > 2.7)
            result.push_back("B");
        else if (gradeCopy > 2.3)
            result.push_back("B-");
        else if (gradeCopy > 2.0)
            result.push_back("C+");
        else if (gradeCopy > 1.7)
            result.push_back("C");
        else if (gradeCopy > 1.3)
            result.push_back("C-");
        else if (gradeCopy > 1.0)
            result.push_back("D+");
        else if (gradeCopy > 0.7)
            result.push_back("D");
        else
            result.push_back("F");
    }
    return result;
}

int main() {
    std::vector<float> grades = {3.8, 2.9, 4.1, 3.5};
    std::vector<std::string> letterGrades = numerical_letter_grade(grades);
    
    for (const auto& grade : letterGrades) {
        std::cout << grade << " ";
    }
    return 0;
}