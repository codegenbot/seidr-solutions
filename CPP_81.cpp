```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::string letterGrade(float grade) {
    if (grade < 1.0)
        return "F";
    else if (grade >= 4.0)
        return "A+";
    else if (grade > 3.7)
        return "A";
    else if (grade > 3.3)
        return "A-";
    else if (grade > 3.0)
        return "B+";
    else if (grade > 2.7)
        return "B";
    else if (grade > 2.3)
        return "B-";
    else if (grade > 2.0)
        return "C+";
    else if (grade > 1.7)
        return "C";
    else if (grade > 1.3)
        return "C-";
    else if (grade > 1.0)
        return "D+";
    else if (grade > 0.7)
        return "D";
    else
        return "F";
}

std::vector<std::string> numericalLetterGrade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        std::string letter = letterGrade(grade);
        result.push_back(letter);  // Pushing a string directly into vector
    }
    return result;
}

int main() {
    std::vector<float> fgrades = {0.0, 0.7};
    std::vector<std::string> grades = numericalLetterGrade(fgrades);
    if (!issame({grades[0], grades[1]}, {"F", "D"}))
        std::cout << "Test failed" << std::endl;
    else
        std::cout << "Test passed" << std::endl;
    return 0;
}