
#include <iostream>
#include <vector>
#include <cmath>

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
    vector<double> coeffs = {1.0, -2.0, 0.0}; // Example coefficients: x^2 - 2x
    vector<double> solution;
    solution.push_back(find_zero(coeffs));
    assert (abs(poly(coeffs, solution[0])) < 1e-3);
    return 0;
}