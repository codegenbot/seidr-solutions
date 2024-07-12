#include <vector>
#include <algorithm>
#include <cassert>

double find_zero(const std::vector<double>& xs) {
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (const auto& coeff : coeffs) {
        result += coeff * std::pow(x, &coeff - &coeffs[0]);
    }
    return result;
}