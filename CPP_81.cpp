#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    // Implement this function to convert numerical grades to letter grades
    // Return a vector of letter grades corresponding to the input numerical grades
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
}