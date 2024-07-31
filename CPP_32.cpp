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
    // Implement numerical method to find the zero of the polynomial
    // Return the zero value
    double x0 = 0; // Initial guess
    double epsilon = 1e-6; // Error threshold
    double x = x0;
    while (fabs(poly(coeffs, x)) > epsilon) {
        double derivative = 0;
        for (int i = 1; i < coeffs.size(); i++) {
            derivative += i * coeffs[i] * pow(x, i - 1);
        }
        x = x - poly(coeffs, x) / derivative;
    }
    return x;
}