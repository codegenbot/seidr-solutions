#include <initializer_list>

#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return (a[0] == b[0] && a[1] == b[1]);
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
    double gpa = 0.7;

    if (numerical_letter_grade(credits, gpa) == "F" || numerical_letter_grade(credits, gpa) == "D+") {
        assert(true);
    }
    
    return 0;