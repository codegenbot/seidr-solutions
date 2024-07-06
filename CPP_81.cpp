#include <string>
#include <vector>

int numerical_letter_grade(int grade) {
    if (grade < 0 || grade > 100)
        return -1;
    else if (grade >= 90)
        return 4; // A
    else if (grade >= 80)
        return 3; // B
    else if (grade >= 70)
        return 2; // C
    else if (grade >= 60)
        return 1; // D
    else
        return 0; // F
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(std::vector<std::string>({{"E"}, {"D-"}}) == numerical_letter_grade({0, 0.7}))); // Use the function here
}