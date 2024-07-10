#include <vector>
#include <cmath>

std::vector<double> coeffs = {1.0, -4.0, 4.0};

double solution;
solution = find_zero(coeffs);
assert(std::abs(poly(coeffs, solution)) < 1e-2);