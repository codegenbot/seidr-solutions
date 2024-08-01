#include <vector>
#include <cassert>

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        if (grade >= 0.9) {
            result.push_back("A");
        } else if (grade >= 0.8) {
            result.push_back("B");
        } else if (grade >= 0.7) {
            result.push_back("C");
        } else if (grade >= 0.6) {
            result.push_back("D");
        } else {
            result.push_back("E");
        }
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    auto grades = numerical_letter_grade({0, 0.7f});
    assert(issame(grades, {"E", "D-"}));
    return 0;
}