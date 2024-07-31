#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

double poly(const vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& coeffs) {
    double a = coeffs[0];
    double b = coeffs[1];
    double c = coeffs[2];
    return (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}

int main() {
    vector<double> coeffs = {1, -2, 1};
    double solution = find_zero(coeffs);
    assert(fabs(poly(coeffs, solution)) < 1e-3);
    return 0;
}