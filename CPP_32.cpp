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
    double guess = 0.0; // Initial guess
    double precision = 1e-6; // Desired precision
    int max_iterations = 1000; // Maximum number of iterations

    for (int i = 0; i < max_iterations; i++) {
        double function_value = poly(coeffs, guess);
        if (fabs(function_value) < precision) {
            return guess;
        }
        double derivative_value = poly({coeffs[1], 2 * coeffs[2]}, guess); // Compute derivative
        guess = guess - function_value / derivative_value; // Update guess using Newton's method
    }

    // If no result found within max_iterations, return NaN (Not a Number)
    return std::numeric_limits<double>::quiet_NaN();
}

int main() {
    vector<double> coeffs = {1, -2, 1};
    double solution = find_zero(coeffs);
    assert(fabs(poly(coeffs, solution)) < 1e-3);
    return 0;
}