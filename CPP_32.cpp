#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs) {
    double a = coeffs[0];
    double b = coeffs[1];
    return -b / a;
}

int main() {
    std::vector<double> coeffs;
    double coeff;
    
    // Read coefficients from user input
    while (std::cin >> coeff) {
        coeffs.push_back(coeff);
    }

    double solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-2);

    return 0;
}