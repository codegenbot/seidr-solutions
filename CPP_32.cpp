#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

double poly(const std::vector<double>& coefficients, double x) {
    double result = 0.0;
    for (int i = 0; i < coefficients.size(); ++i) {
        result += coefficients[i] * std::pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coefficients) {
    double a = coefficients[0];
    double b = coefficients[1];
    return -b / a;
}

int main() {
    std::vector<double> coeffs = {1.0, -4.0, 4.0}; // Updated variable name

    double solution;
    solution = find_zero(coeffs); // Updated variable name
    assert(std::abs(poly(coeffs, solution)) < 1e-2);

    return 0;
}