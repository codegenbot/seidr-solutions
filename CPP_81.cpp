#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(const std::vector<int>& grades) {
    std::vector<std::string> result;
    
    for (int grade : grades) {
        if (grade >= 90.0)
            result.push_back("A");
        else if (grade >= 80.0)
            result.push_back("B");
        else if (grade >= 70.0)
            result.push_back("C");
        else if (grade >= 60.0)
            result.push_back("D");
        else
            result.push_back("F");
    }
    
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<int> grades = {0, 0.7};
    std::vector<std::string> expected = {"E", "D-"};
    assert(issame(numerical_letter_grade(grades), expected));
    return 0;
}