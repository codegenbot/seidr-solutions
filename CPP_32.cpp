#include <iostream>
#include <cassert>
#include <cmath>
#include <vector>

// Function declaration
double poly(const std::vector<double>& x, const std::vector<double>& coefficients);
std::vector<double> find_zero(const std::vector<double>& coefficients);

int main() {
    std::vector<double> coefficients;
    double c;

    // Read coefficients
    while (std::cin >> c) {
        coefficients.push_back(c);
    }

    // Find the zero of the polynomial equation
    std::vector<double> solution = find_zero(coefficients);

    // Check the result
    assert(std::abs(poly(solution, coefficients)) < 1e-3);

    return 0;
}