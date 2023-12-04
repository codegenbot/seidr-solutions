```
#include <iostream>
#include <cmath>
#include <vector>
#include <cassert>
using namespace std;

double poly(const vector<double>& coeffs, double x) {
    // Compute the polynomial value at point x using Horner's method
    double result = 0.0;
    for (int i = coeffs.size() - 1; i >= 0; --i) {
        result = result * x + coeffs[i];
    }
    return result;
}

double find_zero(const vector<double>& coeffs) {
    // TODO: implement this function
}

int main() {
    int ncoeff = 0;
    vector<double> coeffs;
    double solution = 0.0;
    while (ncoeff < 10) {
        cout << "Enter coefficient: ";
        cin >> ncoeff;
        if (!cin) {
            cerr << "Invalid input." << endl;
            return 1;
        }
        coeffs.push_back(ncoeff);
    }
    solution = find_zero(coeffs[0]);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    cout << "Solution: " << solution << endl;
}
```