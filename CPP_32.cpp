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
    double x0 = 1.0; // Initial guess, you may use a different value
    double x1 = x0 - poly(coeffs, x0) / poly(coeffs, 1.0); // Newton's method
    while (abs(x1 - x0) > 1e-9) {
        x0 = x1;
        x1 -= poly(coeffs, x1) / poly(coeffs, 1.0);
    }
    return x1;
}