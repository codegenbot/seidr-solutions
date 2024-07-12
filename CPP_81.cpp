#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
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
    vector<pair<double, string>> letter_grade1 = {{0.0, "A"}, {0.7, "D-" }};
    vector<pair<double, string>> letter_grade2 = {{0.0, "F"}, {0.8, "D" }};

    cout << "The two students have " << (issame(vector<string>(letter_grade1.begin(), letter_grade1.end()), vector<string>(letter_grade2.begin(), letter_grade2.end())) ? "" : "") << " the same letter grade.\n";
}