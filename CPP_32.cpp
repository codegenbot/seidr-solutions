#include <vector>
#include <cmath>
#include <cassert>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0;
    for (size_t i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs) {
    double x = 0.0; // Initial guess for zero
    while (std::abs(poly(coeffs, x)) > 1e-6) {
        x -= poly(coeffs, x) / poly({coeffs.rbegin(), coeffs.rend()}, x);
    }
    return x;
}

int main() {
    std::vector<double> coeffs = {1, -3, 1}; // Example coefficients for x^2 - 3x + 1

    double solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}