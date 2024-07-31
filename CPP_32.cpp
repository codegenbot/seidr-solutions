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
    std::vector<double> coeffs = {1.0, -2.0, 1.0};
    double solution;
    solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}