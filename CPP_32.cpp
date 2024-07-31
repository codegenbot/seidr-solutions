#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

double poly(std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double>& coeffs) {
    return -coeffs[0] / coeffs[1];
}

int main() {
    std::vector<double> coeffs;
    
    // Read coefficients from the user
    double coeff;
    while (std::cin >> coeff) {
        coeffs.push_back(coeff);
    }

    double solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}