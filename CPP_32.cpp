#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

double poly(std::vector<double> coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> coeffs){
    double a = coeffs[0];
    double b = coeffs[1];
    return -b/a;
}

int main() {
    std::vector<double> coeffs = {1, -3, 2}; // Example coefficients
    double solution;
    solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}