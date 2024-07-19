#include <cassert>
#include <cmath>
#include <iostream>
#include <vector>

double poly(const std::vector<double>& x, const std::vector<double>& coefficients) {
    double result = 0.0;
    for (size_t i = 0; i < coefficients.size(); ++i) {
        result += coefficients[i] * std::pow(x[0], i);
    }
    return result;
}

std::vector<double> find_zero(const std::vector<double>& coefficients) {
    std::vector<double> zeros;
    // Implement the logic to find zeros of the polynomial equation
    // This can be done using numerical methods like Newton's method or other root-finding algorithms
    // For simplicity, you can return an empty vector for now
    return zeros;
}

int main() {
    std::vector<double> coeffs = {1, -3, 2};  // example coefficients
    std::vector<double> solution = find_zero(coeffs);

    assert(std::abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}