#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs) {
    return -coeffs[1] / coeffs[0];
}

int main() {
    std::vector<double> coeffs = {1.0, -3.0, 2.0}; // Example coefficients
    assert(std::abs(poly(coeffs, find_zero(coeffs))) < 1e-3);
    
    return 0;
}