#include <vector>
#include <cmath>

double poly(std::vector<double> coefficients, double x) {
    double result = 0;
    for (int i = 0; i < coefficients.size(); i++) {
        result += coefficients[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> xs) {
    std::vector<double> coeffs;
    double sum = 0;
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            double coeff = xs[i] / xs[0];
            coeffs.push_back(coeff);
        }
    }
    double x = -coeffs[0];
    return poly(coeffs, x);
}