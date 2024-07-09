```cpp
#include <vector>
#include <string>
#include <cassert>

bool checkIfSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

float numerical_letter_grade(float grade) {
    if (grade >= 4.0)
        return 4.0; // A
    else if (grade >= 3.7)
        return 3.7; // B+
    else if (grade >= 3.3)
        return 3.3; // B
    else if (grade >= 3.0)
        return 3.0; // C+
    else if (grade >= 2.7)
        return 2.7; // C
    else if (grade >= 2.3)
        return 2.3; // D+
    else
        return 0.0; // E/F
}

int main() {
    std::vector<float> grades = {0, 0.7};
    assert(checkIfSame(std::vector<std::string>(numerical_letter_grade(grades[0]), numerical_letter_grade(grades[1])), {"E", "D-"}));
    return 0;
}