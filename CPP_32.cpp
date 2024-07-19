#include <iostream>
#include <cassert>
#include <cmath>
#include <vector>

// Function declaration
double poly(const std::vector<double>& x, const std::vector<double>& coefficients);
std::vector<double> find_zero(const std::vector<double>& coefficients);

int main() {
    std::vector<double> coeffs;
    double c;

    // Read coefficients
    while (std::cin >> c) {
        coeffs.push_back(c);
    }

    // Find the zero of the polynomial equation
    std::vector<double> solution = find_zero(coeffs);

    // Check the result
    assert(std::abs(poly(solution, coeffs)) < 1e-3);

    return 0;
}