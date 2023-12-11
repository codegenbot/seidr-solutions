```
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

// Define numerical_letter_grade function
vector<string> numerical_letter_grade(vector<double> grades) {
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

// Define are_grades_same function
bool are_grades_same(vector<string> grades1, vector<string> grades2) {
    if (grades1.size() != grades2.size()) {
        return false;
    }
    for (int i = 0; i < grades1.size(); i++) {
        if (grades1[i] != grades2[i]) {
            return false;
        }
    }
    return true;
}

// Remove one of the definitions of main
int main(void) {
    vector<double> grades = {0, 0.7};
    assert(are_grades_same(numerical_letter_grade(grades), {"E", "D-"}));
    return 0;
}
```