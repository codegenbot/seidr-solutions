#include <iostream>
#include <vector>
#include <cmath> 

std::vector<double> coeffs = {1.0, -3.0, 2.0};

double poly(std::vector<double> coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> coeffs) {
    double a = coeffs[0];
    double b = coeffs[1];
    return -b / a;
}

double solution = find_zero(coeffs);
assert(std::abs(poly(coeffs, solution)) < 1e-3);