#include <vector>
#include <string>

bool issame(float a, float b) {
    if (abs(a - b) <= 0.01)
        return true;
    else
        return false;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        if (grade >= 4.0 || issame(grade, 4.0))
            result.push_back("A+");
        else if (grade > 3.7)
            result.push_back("A");
        else if (grade > 3.3)
            result.push_back("A-");
        else if (grade > 3.0 || issame(grade, 3.0))
            result.push_back("B+");
        else if (grade > 2.7)
            result.push_back("B");
        else if (grade > 2.3)
            result.push_back("B-");
        else if (grade > 2.0 || issame(grade, 2.0))
            result.push_back("C+");
        else if (grade > 1.7)
            result.push_back("C");
        else if (grade > 1.3)
            result.push_back("C-");
        else if (grade > 1.0 || issame(grade, 1.0))
            result.push_back("D+");
        else if (grade > 0.7)
            result.push_back("D");
        else
            result.push_back("E");
    }
    return result;
}