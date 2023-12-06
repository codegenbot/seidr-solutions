
Here is the modified code:
```
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> numerical_letter_grade(float score) {
    // implementation
}

int main() {
    assert (issame(numerical_letter_grade({0, 0.7}) , {"E", "D-"}));
    return 0;
}
```