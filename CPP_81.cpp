#include <vector>
#include <string>

bool issame(float a, float b) {
    if (abs(a - b) <= 0.001)
        return true;
    else
        return false;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letterGrades;
    for (float grade : grades) {
        if (issame(grade, 4.0))
            letterGrades.push_back("A+");
        else if (issame(grade, 3.7))
            letterGrades.push_back("A");
        else if (issame(grade, 3.3))
            letterGrades.push_back("A-");
        else if (issame(grade, 3.0))
            letterGrades.push_back("B+");
        else if (issame(grade, 2.7))
            letterGrades.push_back("B");
        else if (issame(grade, 2.3))
            letterGrades.push_back("B-");
        else if (issame(grade, 2.0))
            letterGrades.push_back("C+");
        else if (issame(grade, 1.7))
            letterGrades.push_back("C");
        else if (issame(grade, 1.3))
            letterGrades.push_back("C-");
        else if (issame(grade, 1.0))
            letterGrades.push_back("D+");
        else if (issame(grade, 0.7))
            letterGrades.push_back("D");
        else
            letterGrades.push_back("E");
    }
    return letterGrades;
}