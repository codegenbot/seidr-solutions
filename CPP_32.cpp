#include <vector>
#include <cmath>

double find_zero(vector<double> coefficients) {
    double coeffs = {coefficients[0], coefficients[1]};
    double x = -coeffs[1] / (2 * coeffs[0]);
    return x;
}

double poly(vector<double> coefficients, double x) {
    double result = 0.0;
    for(int i=0; i<coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}