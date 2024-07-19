#include <iostream>
#include <vector>
#include <cmath>

std::vector<double> coeffs;
double coeff;
while (std::cin >> coeff) {
    coeffs.push_back(coeff);
}

// Declare and define find_zero function

std::vector<double> solution = find_zero(coeffs);
assert(std::abs(poly(coeffs, solution)) < 1e-3);