#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double poly(const vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs) {
    // Newton's method to find root
    double x0 = 0.0; // Initial guess
    double x1 = xs[0] / xs[1]; // Improved guess
    while (abs(x1 - x0) >= 1e-6) {
        x0 = x1;
        x1 = x0 - poly(xs, x0) / poly_deriv(xs, x0);
    }
    return x1;
}

int main() {
    vector<double> coeffs = {5.0, -3.0, 1.0}; // Example coefficients
    double solution;

    solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}