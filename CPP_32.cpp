#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

double poly(vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& coeffs) {
    return -coeffs[0] / coeffs[1];
}

int main() {
    vector<double> coeffs = {1, -2, 1};
    double solution;
    solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}