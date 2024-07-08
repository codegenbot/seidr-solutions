#include <cmath>

vector<double> coeffs() {
    vector<double> coefficients = {1.0, -3.0, 2.0}; // Example coefficients
    return coefficients;
}

double poly(vector<double> coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs) {
    double a = xs[0];
    double b = xs[1];
    return -b / a;
}