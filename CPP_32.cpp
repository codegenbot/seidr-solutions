#include <iostream>
#include <vector>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs) {
    // Your implementation to find zero of polynomial
    return 0.0;
}

int main() {
    std::vector<double> coeffs;
    
    double coeff;
    while (std::cin >> coeff) {
        coeffs.push_back(coeff);
    }

    double solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}