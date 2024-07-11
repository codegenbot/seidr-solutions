#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> numerical_letter_grade(vector<float> grades);

int main() {
    assert (issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float gpa : grades) {
        // Your existing logical conditions here
    }
    return letter_grades;
}