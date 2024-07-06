#include <iostream>
#include <vector>
#include <string>

// Add your numerical_letter_grade function declaration here...

std::vector<std::string> numerical_letter_grade(std::vector<int> grades) {
    std::vector<std::string> result;
    
    for (int i = 0; i < grades.size(); i++) {
        if(grades[i] >= 90.0)
            result.push_back("A");
        else if(grades[i] >= 80.0)
            result.push_back("B");
        else if(grades[i] >= 70.0)
            result.push_back("C");
        else if(grades[i] >= 60.0)
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
    // Use the corrected function and types...
    std::vector<int> grades = {0, 0.7};
    std::vector<std::string> expected = {"E", "D-"};
    assert(issame(numerical_letter_grade(grades), expected));
    return 0;
}