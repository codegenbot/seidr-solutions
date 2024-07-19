#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float gpa : grades) {
        if (gpa == 4.0f) letter_grades.push_back("A+");
        else if (gpa > 3.7f) letter_grades.push_back("A");
        else if (gpa > 3.3f) letter_grades.push_back("A-");
        else if (gpa > 3.0f) letter_grades.push_back("B+");
        else if (gpa > 2.7f) letter_grades.push_back("B");
        else if (gpa > 2.3f) letter_grades.push_back("B-");
        else if (gpa > 2.0f) letter_grades.push_back("C+");
        else if (gpa > 1.7f) letter_grades.push_back("C");
        else if (gpa > 1.3f) letter_grades.push_back("C-");
        else if (gpa > 1.0f) letter_grades.push_back("D+");
        else if (gpa > 0.7f) letter_grades.push_back("D");
        else if (gpa > 0.0f) letter_grades.push_back("D-");
        else letter_grades.push_back("E");
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
    assert(issame(numerical_letter_grade({0.0f, 0.7f}), {"E", "D-"}));
    return 0;
}