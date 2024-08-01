#include <cmath>
#include <cassert>
#include <vector>

double poly(const std::vector<double>& coefficients, double x);

double find_zero(const std::vector<double>& xs) {
    double a = xs[0];
    double b = xs[1];
    return -b / a;
}

double poly(const std::vector<double>& coefficients, double x) {
    double result = 0.0;
    int degree = coefficients.size() - 1;

    for (int i = 0; i < coefficients.size(); i++) {
        result += coefficients[i] * std::pow(x, degree - i);
    }

    return result;
}

int main() {
    std::vector<double> coeffs = {1.0, -3.0, 2.0}; // Example coefficients
    double solution = find_zero(coeffs);

    assert(std::abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}