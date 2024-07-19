#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::string numerical_letter_grade(double grade) {
    if (grade >= 0 && grade < 0.5) return "E";
    else if (grade >= 0.5 && grade < 1.5) return "D-";
    // Add more conditions for other grades as needed
    return "A"; // placeholder return value
}

int main() {
    assert(issame({numerical_letter_grade(0), numerical_letter_grade(0.7)}, {"E", "D-"}));

    return 0;
}