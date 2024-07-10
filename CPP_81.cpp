```cpp
#include <iostream>
#include <string>

bool issame(std::string a, std::string b) {
    if (a.length() != b.length()) return false;
    for (int i = 0; i < a.length(); i++) {
        bool found = false;
        for (char c : b) {
            if (a[i] == c) { 
                found = true;
                break;
            }
        }
        if (!found) return false;
    }
    return true;
}

std::string numerical_letter_grade(int credits, double gpa) {
    if (gpa >= 3.7) return "A";
    else if (gpa >= 3.4) return "B+";
    else if (gpa >= 3.1) return "B";
    else if (gpa >= 2.8) return "C+";
    else if (gpa >= 2.5) return "C";
    else if (gpa >= 2.2) return "D+";
    else return "F";
}

int main() {
    int credits = 0;
    double gpa = 3.4;

    std::cout << numerical_letter_grade(credits, gpa) << std::endl;

    try {
        assert(numerical_letter_grade(0, 2.5) == "C"); 
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}