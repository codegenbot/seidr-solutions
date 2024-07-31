#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

double poly(const vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& coeffs) {
    // Newton's method for finding zero of polynomial
    double x = 0.0; // Initial guess
    double epsilon = 1e-9; // Tolerance
    int max_iterations = 1000;
    
    for (int i = 0; i < max_iterations; i++) {
        double fx = poly(coeffs, x);
        double dfx = 0;
        for (int j = 1; j < coeffs.size(); j++) {
            dfx += j * coeffs[j] * pow(x, j - 1);
        }
        if (fabs(fx) < epsilon) {
            return x;
        }
        x = x - fx / dfx;
    }
    
    return x; // Return the closest value found if max_iterations reached
}

int main() {
    vector<double> coeffs = {1, -2, 1};
    double solution = find_zero(coeffs);
    assert(fabs(poly(coeffs, solution)) < 1e-3);
    return 0;
}