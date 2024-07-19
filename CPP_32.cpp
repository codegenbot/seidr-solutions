#include <vector>
#include <cassert>
#include <cmath>

double poly(const vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& xs) {
    return -xs[0] / xs[1];
}

int main() {
    vector<double> coeffs = {1, -5, 6}; // Example coefficients of a polynomial x^2 - 5x + 6
    double solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    return 0;
}