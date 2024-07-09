#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> letter_grades;
    
    for (float grade : grades) {
        if (grade >= 0.0f && grade < 1.0f) {
            letter_grades.push_back("E");
        } else if (grade >= 1.0f && grade < 2.0f) {
            letter_grades.push_back("D-");
        } // Add more conditions for other grade ranges as needed
    }
    
    return letter_grades;
}

bool is_same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(is_same(numerical_letter_grade({0.0f, 0.7f}), std::vector<std::string>{"E", "D-"}));
    return 0;
}