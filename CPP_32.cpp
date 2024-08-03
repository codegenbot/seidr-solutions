#include <vector>
#include <cmath>
#include <cassert>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& xs) {
    double a = poly(xs, 1.0);
    double b = poly(xs, 0.0);
    return -b/a;
}

int main() {
    std::vector<double> coeffs = {1.0, 2.0, 3.0};
    coeffs.push_back(4.0);
    double solution = find_zero(coeffs);
    if (std::abs(poly(coeffs, solution)) < 1e-3) { /* Handle success */ }
    
    return 0;
}