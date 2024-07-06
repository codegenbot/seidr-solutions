```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(const std::vector<int>& grades) {
    std::vector<std::string> result;
    
    for (int grade : grades) {
        if (grade >= 90)
            result.push_back("A");
        else if (grade >= 80)
            result.push_back("B");
        else if (grade >= 70)
            result.push_back("C");
        else if (grade >= 60)
            result.push_back("D");
        else
            result.push_back("F");
    }
    
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<int> grades = {90, 70};
    std::vector<std::string> expected = {"A", "C"};
    assert(issame(numerical_letter_grade(grades), expected));
    return 0;
}