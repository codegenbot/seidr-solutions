```cpp
#include <vector>
#include <string>

bool issame(float a, float b) {
    return std::abs(a - b) < 0.01;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        if (issame(grade, 4.0))
            result.push_back("A+");
        else if (issame(grade, 3.7))
            result.push_back("A");
        else if (issame(grade, 3.3))
            result.push_back("A-");
        else if (issame(grade, 3.0))
            result.push_back("B+");
        else if (issame(grade, 2.7))
            result.push_back("B");
        else if (issame(grade, 2.3))
            result.push_back("B-");
        else if (issame(grade, 2.0))
            result.push_back("C+");
        else if (issame(grade, 1.7))
            result.push_back("C");
        else if (issame(grade, 1.3))
            result.push_back("C-");
        else if (issame(grade, 1.0))
            result.push_back("D+");
        else if (issame(grade, 0.7))
            result.push_back("D");
        else
            result.push_back("E");
    }
    return result;
}