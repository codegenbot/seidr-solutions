#include <iostream>
#include <vector>
#include <string>
#include <cmath>

std::vector<std::string> numerical_letter_grade(std::vector<double> grades) {
    std::vector<std::string> result(grades.size());
    
    for (int i = 0; i < grades.size(); i++) {
        if(grades[i] >= 90.0)
            result[i] = "A";
        else if(grades[i] >= 80.0)
            result[i] = "B";
        else if(grades[i] >= 70.0)
            result[i] = "C";
        else if(grades[i] >= 60.0)
            result[i] = "D";
        else 
            result[i] = "F";
    }
    
    return result;
}

bool operator==(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<double> grades = {0.0, 70.0};
    std::vector<std::string> expected = {"F", "D"};
    assert(operator==(numerical_letter_grade(grades), expected));
    return 0;
}