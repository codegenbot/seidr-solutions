#include <vector>
#include <cmath>

double poly(const vector<double>& coefficients, double x) {
    double result = 0.0;
    for (size_t i = 0; i < coefficients.size(); ++i) {
        result += coefficients[i] * pow(x, i);
    }
    return result;    
} 

double find_zero(const vector<double>& coeffs) {
    double a = coeffs[0];
    double b = coeffs[1];
    return -b / a;
}