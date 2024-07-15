#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double poly(const vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs) {
    return -xs[0] / xs[1];
}

int main() {
    vector<double> coeffs = {5.0, -3.0, 1.0}; // Example coefficients
    double solution;
    
    solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}