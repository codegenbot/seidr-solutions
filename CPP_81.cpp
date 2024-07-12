#include <string>
#include <vector>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool sameLetterGrade(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return issame(a, b);
}

int main() {
    int numerical_grade1[2] = {0, 0.7};
    std::vector<std::string> letter_grade1 = {"E", "D-"};

    int numerical_grade2[2] = {0, 0.8};
    std::vector<std::string> letter_grade2 = {"F", "D"};

    cout << "The two students have " << (issame(letter_grade1, letter_grade2) ? "" : "") << "the same letter grade.\n";
}