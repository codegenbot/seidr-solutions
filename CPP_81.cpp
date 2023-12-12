```
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    // Your implementation here
}

vector<string> numerical_letter_grade(const vector<double>& grades) {
    // Your implementation here
}

int main() {
    vector<double> grades = {0, 0.7};
    assert(issame(numerical_letter_grade(grades), {"E", "D-"}));
    return 0;
}
```