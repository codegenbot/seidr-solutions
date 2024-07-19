#include <vector>
#include <iostream>
#include <cmath>
#include <cassert>

std::vector<double> find_zero(const std::vector<double>& coeffs) {
    // Implementation to find zero
}

double poly(const std::vector<double>& coeffs, double x) {
    // Implementation of polynomial evaluation
}

int main() {
    std::vector<double> coeffs;
    double coeff;
    while (std::cin >> coeff) {
        coeffs.push_back(coeff);
    }

    std::vector<double> solution = find_zero(coeffs);

    return 0;
}