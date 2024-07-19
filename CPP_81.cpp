#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::string numerical_letter_grade(std::vector<double> grades) {
    if (grades.empty()) return "";
    
    double avg_grade = 0;
    for (double grade : grades) {
        avg_grade += grade;
    }
    avg_grade /= grades.size();

    if (avg_grade >= 0 && avg_grade < 1) return "E";
    else if (avg_grade >= 1 && avg_grade < 1.7) return "D-";
    // Add more grade evaluations according to your logic

    return ""; // Default case
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    // Add more test cases here

    return 0;
}