#include <iostream>
#include <vector>
#include <cmath>
#include <cassert> // Include assert header

using namespace std;

double poly(vector<double> xs, double x) {
    double result = 0.0;
    for (int i = 0; i < xs.size(); i++) {
        result += xs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs) {
    return -xs[0] / xs[1];
}

int main() {
    vector<double> coeffs = {1.0, -2.0, 1.0}; // Example coefficients
    double solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}