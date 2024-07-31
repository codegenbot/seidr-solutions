#include <vector>
#include <cmath>
#include <initializer_list>

double poly(std::vector<double> coefficients, double x) {
    double result = 0;
    for (int i = 0; i < coefficients.size(); i++) {
        result += coefficients[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> xs) {
    double sum = 0;
    std::vector<double> cs;
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            cs.push_back(xs[i] / xs[0]);
        }
    }
    double x = -cs[0];
    return poly(cs, x);
}