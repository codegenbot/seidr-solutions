#include <vector>
#include <cassert>

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> letter_grades;
    for (const auto& grade : grades) {
        if (grade >= 0.9f)
            letter_grades.push_back("A");
        else if (grade >= 0.8f)
            letter_grades.push_back("B");
        else if (grade >= 0.7f)
            letter_grades.push_back("C");
        else if (grade >= 0.6f)
            letter_grades.push_back("D");
        else
            letter_grades.push_back("E");
    }
    return letter_grades;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    auto grades = numerical_letter_grade({0, 0.7f});
    assert(issame(grades, {"E", "D-"}));
    return 0;
}