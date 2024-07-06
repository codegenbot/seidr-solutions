```
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(std::vector<double> grades) {
    std::vector<std::string> result;
    
    for (int i = 0; i < grades.size(); i++) {
        if(static_cast<int>(grades[i]) >= 90.0)
            result.push_back("A");
        else if(static_cast<int>(grades[i]) >= 80.0)
            result.push_back("B");
        else if(static_cast<int>(grades[i]) >= 70.0)
            result.push_back("C");
        else if(static_cast<int>(grades[i]) >= 60.0)
            result.push_back("D");
        else 
            result.push_back("F");
    }
    
    return result;
}

bool isSame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<int> grades = {static_cast<int>(0), static_cast<int>(70)};
    std::vector<std::string> expected = {"F", "D-"};
    assert(isSame(numerical_letter_grade({0.0, 0.7}), expected));
    return 0;
}