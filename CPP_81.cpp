```cpp
#include <vector>
#include <string>

std::string numerical_letter_grade(std::vector<int> grades) {
    std::string letter_grade;
    int sum = 0;

    for (int grade : grades) {
        sum += grade;
    }

    if (sum >= 90) {
        letter_grade = "A";
    } else if (sum >= 80) {
        letter_grade = "B";
    } else if (sum >= 70) {
        letter_grade = "C";
    } else if (sum >= 60) {
        letter_grade = "D";
    } else {
        letter_grade = "F";
    }

    return letter_grade;
}

bool issame(const std::vector<std::string>& a) {
    return a == std::vector<std::string>({"D-", "F"});
}