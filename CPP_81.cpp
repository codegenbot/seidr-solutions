```
#ifndef __cpp_initiliazer
#define __cpp_initiliazer 201304 (C++11)
#endif

#include <vector>
#include <string>

bool checkIfSame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades(grades.size());
    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] >= 4.0)
            letter_grades[i] = "A+";
        else if (grades[i] > 3.7)
            letter_grades[i] = "A";
        else if (grades[i] > 3.3)
            letter_grades[i] = "A-";
        else if (grades[i] > 3.0)
            letter_grades[i] = "B+";
        else if (grades[i] > 2.7)
            letter_grades[i] = "B";
        else if (grades[i] > 2.3)
            letter_grades[i] = "B-";
        else if (grades[i] > 2.0)
            letter_grades[i] = "C+";
        else if (grades[i] > 1.7)
            letter_grades[i] = "C";
        else if (grades[i] > 1.3)
            letter_grades[i] = "C-";
        else if (grades[i] > 1.0)
            letter_grades[i] = "D+";
        else if (grades[i] > 0.7)
            letter_grades[i] = "D";
        else
            letter_grades[i] = "F";
    }
    return letter_grades;
}

int main() {
    assert(checkIfSame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    return 0;
}