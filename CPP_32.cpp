#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs) {
    double a = coeffs[0];
    double b = coeffs[0];
    return -b / a;
}

int main() {
    std::vector<double> coeff = {1.0, -4.0, 4.0};

    double solution;
    solution = find_zero(coeff);
    assert(std::abs(poly(coeff, solution)) < 1e-2);

    return 0;
}