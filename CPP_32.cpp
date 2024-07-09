#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

double poly(std::vector<double> coeffs, double x);

double find_zero(std::vector<double> coeffs){
    assert(coeffs.size() >= 2);
    double a = coeffs[0];
    double b = coeffs[1];
    return -b/a;
}

double abs(double x){
    return std::abs(x);
}

double poly(std::vector<double> coeffs, double x){
    double result = 0;
    for(int i = 0; i < coeffs.size(); ++i){
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}