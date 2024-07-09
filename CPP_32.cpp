#include <vector>
#include <cmath>
#include <cassert>

double poly(std::vector<double> coeffs, double x);

double find_zero(std::vector<double> xs){
    assert(xs.size() >= 2);
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

double poly(std::vector<double> coeffs, double x) {
    double result = 0.0;
    for (size_t i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}