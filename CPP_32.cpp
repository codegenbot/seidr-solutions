#include <vector>
#include <cmath>
#include <cassert>

double poly(std::vector<double> coeffs, double x) {
    // Implementation of poly function
    return 0.0; // Replace with actual implementation
}

double find_zero(std::vector<double> xs) {
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

int main() {
    std::vector<double> coeffs = {1.0, 2.0}; // Example coefficients
    double solution;
    solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}