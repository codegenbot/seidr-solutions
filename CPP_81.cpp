#include <vector>
#include <string>

bool issame(std::pair<std::string, std::string> a, std::pair<std::string, std::string> b) {
    return (a.first == b.first && a.second == b.second);
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

    std::pair<std::string, std::string> input1({"E", "D-"});
    
    if (numerical_letter_grade(credits, gpa) == "F" || numerical_letter_grade(credits, gpa) == "D-") {
        assert(true);
    }
    
    return 0;
}