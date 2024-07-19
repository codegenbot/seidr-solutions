#include <iostream>
#include <cassert>
#include <cmath>
#include <vector>

// Function declaration
double poly(const std::vector<double>& x, const std::vector<double>& coefficients);
std::vector<double> find_zero(const std::vector<double>& coefficients);

int main() {
    std::vector<double> coeff;
    double c;

    // Read coefficients
    while (std::cin >> c) {
        coeff.push_back(c);
    }

    // Find the zero of the polynomial equation
    auto solution = find_zero(coeff);

    // Check the result
    assert(std::abs(poly(solution, coeff)) < 1e-3);

    return 0;
}