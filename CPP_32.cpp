#include <iostream>
#include <vector>
#include <cmath>

std::vector<double> coeffs = {1.0, -3.0, 2.0};

double solution = find_zero(coeffs);
assert(std::abs(poly(coeffs, solution)) < 1e-3);