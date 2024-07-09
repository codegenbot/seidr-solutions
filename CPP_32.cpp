#include <vector>
#include <cassert>
#include <cmath>

double poly(std::vector<double> coeffs, double x);

double abs(double val) {
    return (val < 0) ? -val : val;
}

double find_zero(std::vector<double> coeffs){
    double a = coeffs[0];
    double b = coeffs[1];
    return -b/a;
}

double poly(std::vector<double> coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}