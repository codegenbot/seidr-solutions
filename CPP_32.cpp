```
#include <iostream>
using namespace std;

vector<double> coeffs = {}; // Define the coeffs vector

// Define the find_zero function
double find_zero(vector<double> xs) {
    double x = 0;
    int i = 0;
    while (i < xs.size() - 1) {
        if (xs[i] == 0 && xs[i + 1] != 0) break;
        i++;
    }
    if (i == xs.size() - 1) return 0;
    x = xs[i];
    for (int j = i + 1; j < xs.size(); j++) {
        x += xs[j] * pow(x, j);
    }
    return x;
}

// Define the poly function
double poly(vector<double> coeffs) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

int main() {
    int ncoeff = 0; // Declare the ncoeff variable
    double solution = 0; // Declare the solution variable
    while (ncoeff < 10) {
        cout << "Enter coefficient: ";
        cin >> ncoeff;
        coeffs.push_back(ncoeff); // Add the new coefficient to the coeffs vector
    }
    solution = find_zero(coeffs); // Find the zero of the polynomial using the find_zero function
    assert(abs(poly(coeffs, solution)) < 1e-3); // Check that the solution is correct
}
```