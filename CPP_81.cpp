```
#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert (issame(numerical_letter_grade({0, 0.7}) , {"E", "D-"}));
    return 0;
}
```