// Include necessary headers
#include <vector>
#include <cmath>
#include <cassert>

// Remove forward declaration of find_zero function
// Add header file for vector
double find_zero(const vector<double>& xs) {
    // Initialize coefficients vector
    vector<double> coeffs = {1, -2, 1}; // Example coefficients: x^2 - 2x + 1
    double a = poly(coeffs, 1);
    double b = poly(coeffs, 0);
    return -b / a;
}