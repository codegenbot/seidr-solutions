#include <iostream>
#include <vector>
#include <string>

std::string numerical_letter_grade(const std::vector<int>& grades) {
    int sum = 0;
    for (int grade : grades) {
        sum += grade;
    }
    if (sum / static_cast<double>(grades.size()) >= 90.0)
        return "A";
    else if (sum / static_cast<double>(grades.size()) >= 80.0)
        return "B";
    else if (sum / static_cast<double>(grades.size()) >= 70.0)
        return "C";
    else if (sum / static_cast<double>(grades.size()) >= 60.0)
        return "D-";
    else
        return "F";
}

bool issame(const std::vector<std::string>& a) {
    return (a.size() == 1 && a[0] == "E");
}

int main() {
    assert(issame({{"E"}}));
    std::cout << numerical_letter_grade({70}) << std::endl;
}