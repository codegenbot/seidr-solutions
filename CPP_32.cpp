#include <cmath>

double poly(std::array<double, 32> coefficients, double x) {
    double result = 0;
    for (int i = 0; i < coefficients.size(); i++) {
        result += coefficients[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::array<double, 32> xs) {
    double sum = 0;
    std::array<double, 16> cs;
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            cs[i/2] = xs[i] / xs[0];
        }
    }
    double x = -cs[0];
    return poly(cs, x);
}