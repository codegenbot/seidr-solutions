
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int ncoeff = 0;
    vector<double> coeffs;
    double solution = 0;
    while (ncoeff < 10) {
        cout << "Enter coefficient: ";
        cin >> ncoeff;
        coeffs.reserve(ncoeff + 1); // increase capacity of vector by one element
        coeffs.push_back(ncoeff);
    }
    solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
}

double poly(const vector<double>& coeffs, double x) {
    // TODO: implement this function
}
```