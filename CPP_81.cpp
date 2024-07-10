#include <vector>
#include <string>

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
    std::pair<std::vector<int>, std::vector<double>> input({credits}, {gpa});
    assert(issame(numerical_letter_grade({credits, gpa}), {"E", "D-"}));
    return 0;
}