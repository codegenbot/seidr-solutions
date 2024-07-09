#include <vector>
#include <cassert>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> numerical_letter_grade(vector<float> grades);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float gpa : grades) {
        if (gpa >= 0.0 && gpa < 0.6) {
            letter_grades.push_back("F");
        } else if (gpa >= 0.6 && gpa < 1.0) {
            letter_grades.push_back("D-");
        } // add more conditions for other grades
    }
    return letter_grades;
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"F", "D-"}));
    return 0;
}