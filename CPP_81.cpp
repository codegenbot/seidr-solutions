#include <iostream>
#include <vector>
#include <string>

std::string numerical_letter_grade(int credits, double grade) {
    if (grade >= 3.7)
        return "A";
    else if (grade >= 3.0)
        return "B";
    else if (grade >= 2.0)
        return "C";
    else if (grade >= 1.0)
        return "D";
    else
        return "E";
}

bool same(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(same({numerical_letter_grade(0, 0.7)}, {"E", "D-"}));  
}