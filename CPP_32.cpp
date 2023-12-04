
Here's the corrected code:
```
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double find_zero(double x) {
    return 0; // TODO: implement this function
}

int main() {
    int ncoeff = 0;
    vector<double> coeffs = {};
    double solution = 0;
    while (ncoeff < 10) {
        cout << "Enter coefficient: ";
        cin >> ncoeff;
        coeffs.push_back(ncoeff);
    }
    solution = find_zero(coeffs[0]);
    assert(abs(poly(coeffs, solution)) < 1e-3);
}
```