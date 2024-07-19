#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float gpa : grades) {
        // Your existing logic for calculating letter grades
    }
    return letter_grades;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    return 0;
}