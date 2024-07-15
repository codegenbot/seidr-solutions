#include <cmath>
#include <vector>
#include <cassert>

double poly(const std::vector<double>& coefficients, double x) {
    double result = 0.0;
    for (int i = 0; i < coefficients.size(); ++i) {
        result += coefficients[i] * std::pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coefficients) {
    return -coefficients[0] / coefficients[1];
}

int main() {
    std::vector<double> coeffs = {1, -3, 2}; // Example coefficients
    double solution;
    solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}