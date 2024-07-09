#include <vector>
#include <cassert>
#include <cmath>

double poly(double x, const std::vector<double>& coeffs);

double find_zero(const std::vector<double>& xs){
    assert(xs.size() >= 2);
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

double poly(double x, const std::vector<double>& coeffs){
    double result = 0.0;
    for(int i = 0; i < coeffs.size(); ++i){
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}