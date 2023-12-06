```
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> numerical_letter_grade(vector<double> grades) {
    // Implement the function to convert numerical grades to letter grades
    // Replace this with your own implementation
    vector<string> letter_grades;
    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] >= 90) {
            letter_grades.push_back("A");
        } else if (grades[i] >= 80) {
            letter_grades.push_back("B");
        } else if (grades[i] >= 70) {
            letter_grades.push_back("C");
        } else if (grades[i] >= 60) {
            letter_grades.push_back("D");
        } else {
            letter_grades.push_back("F");
        }
    }
    return letter_grades;
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    return 0;
}
```