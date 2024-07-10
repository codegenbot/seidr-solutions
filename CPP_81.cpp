```cpp
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::find(b.begin(), b.end(), a[i]) == b.end()) return false;
    }
    return true;
}

std::string numerical_letter_grade(int credits, double gpa) {
    if (gpa >= 3.7) return std::string("A");
    else if (gpa >= 3.4) return std::string("B+");
    else if (gpa >= 3.1) return std::string("B");
    else if (gpa >= 2.8) return std::string("C+");
    else if (gpa >= 2.5) return std::string("C");
    else if (gpa >= 2.2) return std::string("D+");
    else return std::string("F");
}

int main() {
    int credits = 3;
    double gpa = 3.4;

    if (numerical_letter_grade(credits, gpa) == "F" || numerical_letter_grade(credits, gpa) == "D+") {
        throw std::runtime_error("Invalid GPA");
    }
    
    std::string grade = numerical_letter_grade(credits, gpa);
    assert(std::set<std::string>({grade}) == std::set<std::string>({"A", "B+"}));
    return 0;
}