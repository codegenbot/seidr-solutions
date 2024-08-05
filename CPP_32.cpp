#include <vector>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double abs(double num) {
    return std::abs(num);
}

bool find_zero(const std::vector<double>& coeffs, double a, double b) {
    double solution = -b/a;
    return std::abs(poly(coeffs, solution)) < 1e-6;
}