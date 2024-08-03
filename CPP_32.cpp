#include <vector>
#include <cmath>
#include <cassert>

std::vector<double> coeffs = {};

for (double coeff : coeffs){
    coeffs.push_back(coeff);
}

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& xs) {
    double a = poly(xs, 1);
    double b = poly(xs, 0);
    return -b / a;
}

assert(std::abs(poly(coeffs, solution)) < 1e-3);