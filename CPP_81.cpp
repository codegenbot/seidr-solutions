#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> numerical_letter_grade(const std::vector<double>& grades) {
    std::vector<std::string> result;
    for (const auto& grade : grades) {
        if (grade >= 0 && grade < 0.6) {
            result.push_back("F");
        } else if (grade >= 0.6 && grade < 0.7) {
            result.push_back("D-");
        } else if (grade >= 0.7 && grade < 0.8) {
            result.push_back("D");
        } else if (grade >= 0.8 && grade < 0.9) {
            result.push_back("C");
        } else if (grade >= 0.9 && grade < 0.95) {
            result.push_back("B");
        } else if (grade >= 0.95 && grade <= 1.0) {
            result.push_back("A");
        } else {
            result.push_back("Invalid Grade");
        }
    }
    return result;
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"F", "D-"}));
    // more test cases here
    return 0;
}