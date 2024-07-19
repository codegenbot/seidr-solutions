#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<double> a, std::vector<double> b) {
    return a == b;
}

std::string numerical_letter_grade(std::vector<double> grades) {
    double avg = 0;
    for (double grade : grades) {
        avg += grade;
    }
    avg /= grades.size();

    if (avg < 0.5) {
        return "F";
    } else if (avg < 1.5) {
        return "D";
    } else if (avg < 2.5) {
        return "C";
    } else if (avg < 3.5) {
        return "B";
    } else {
        return "A";
    }
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {0, 0.7}));
}  