#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (size_t i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs) {
    if (coeffs.size() < 2) {
        throw std::invalid_argument("At least 2 coefficients required");
    }
    double a = coeffs[0];
    double b = coeffs[1];
    if (a == 0) {
        throw std::invalid_argument("Coefficient 'a' must be non-zero");
    }
    return -b / a;
}

int main() {
    std::vector<double> coeffs = {1.0, -4.0, 4.0};

    double solution;
    try {
        solution = find_zero(coeffs);
        assert(std::abs(poly(coeffs, solution)) < 1e-2);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}