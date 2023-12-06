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
    vector<string> letters;
    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] >= 90) {
            letters.push_back("A");
        } else if (grades[i] >= 80) {
            letters.push_back("B");
        } else if (grades[i] >= 70) {
            letters.push_back("C");
        } else if (grades[i] >= 60) {
            letters.push_back("D");
        } else {
            letters.push_back("F");
        }
    }
    return letters;
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    vector<double> grades = {95, 85, 75, 65};
    vector<string> letters = numerical_letter_grade(grades);
    for (int i = 0; i < letters.size(); i++) {
        cout << letters[i] << endl;
    }
    return 0;
}
```