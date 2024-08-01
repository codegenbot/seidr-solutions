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
    if (coeffs.size() < 2)
        return 0; 

    double root = -coeffs[0] / coeffs[1]; 
    return root;
}

int main() {
    std::vector<double> coeffs;
    // Populate coeffs vector with coefficients
    coeffs = {1, -3, 2}; // Example coefficients, here x^2 - 3x + 2

    double solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}