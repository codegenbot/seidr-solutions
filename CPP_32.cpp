#include <vector>
#include <cmath>
#include <cassert>

double poly(const vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& xs) {
    return -xs[0] / xs[1];
}

int main() {
    vector<double> coeffs = {1, -2, 1};  // Example coefficients of a quadratic equation
    double solution;
    vector<double> xs = {1, -2};  // Coefficients of equation derived from original equation
    solution = find_zero(xs);
    assert(abs(poly(coeffs, solution) < 1e-3));
    return 0;
}