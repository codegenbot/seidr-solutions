#include <vector>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (size_t i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

double abs(double x) {
    return std::abs(x);
}

double find_zero(const std::vector<double>& coeffs, double a, double b) {
    return std::abs(poly(coeffs, -b / a)) < 1e-6;
}