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

double find_zero(const std::vector<double>& xs){
    return -xs[0] / xs[1];
}

int main() {
    std::vector<double> coeffs = {2.0, -1.0, 1.0}; // Example coefficients for x^2 - x + 1
    double solution = 0.0;

    solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}