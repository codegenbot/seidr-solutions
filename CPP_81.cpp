#include <iostream>
#include <string>

bool issame(std::string a, std::string b) {
    if (a.length() != b.length()) return false;
    for (int i = 0; i < a.length(); i++) {
        size_t found = b.find(a[i]);
        if (found == std::string::npos) return false;
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

std::string check_gpa(double gpa) {
    if (gpa < 0 || gpa > 4.0) throw std::runtime_error("Invalid GPA");
    if (gpa >= 3.7) return "A";
    else if (gpa >= 3.4) return "B+";
    else if (gpa >= 3.1) return "B";
    else if (gpa >= 2.8) return "C+";
    else if (gpa >= 2.5) return "C";
    else if (gpa >= 2.2) return "D+";
    else return "F";
}

int main() {
    double gpa;
    std::cout << "Enter your GPA: ";
    std::cin >> gpa;

    try {
        std::string grade = check_gpa(gpa);
        if (grade == "F" || grade == "D+") {
            throw std::runtime_error("Invalid GPA");
        }
        std::cout << "Your letter grade is: " << grade << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}