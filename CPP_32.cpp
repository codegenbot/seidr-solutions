
Sure, here is the modified code:
```cpp
#include <iostream>
#include <cmath>
#include <vector>
#include <polynomial/polynomial.h>

int main() {
    int ncoeff = 0;
    vector<double> coeffs = {};
    double solution = 0;
    while (ncoeff < 10) {
        cout << "Enter coefficient: ";
        cin >> ncoeff;
        coeffs.push_back(ncoeff);
    }
    solution = find_root(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
}
```