```
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double find_zero(double x) {
    // TODO: implement this function
}

int main() {
    int ncoeff = 0;
    vector<double> coeffs;
    double solution = 0;
    while (ncoeff < 10) {
        cout << "Enter coefficient: ";
        cin >> ncoeff;
        coeffs.push_back(ncoeff);
    }
    solution = find_zero(coeffs[0]); // Modify the code to pass a single double value, not the whole vector.
    assert(abs(poly(coeffs, solution)) < 1e-3);
}
```