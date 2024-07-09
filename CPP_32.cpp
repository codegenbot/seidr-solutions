#include <vector>
#include <cmath>
#include <cassert>

double polynomial(std::vector<double> coeffs, double x){
    double result = 0.0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

double custom_abs(double num){
    return num >= 0 ? num : -num;
}

double find_zero(std::vector<double> coeffs){
    assert(coeffs.size() > 1);
    double a = coeffs[0];
    double b = coeffs[1];
    return -b/a;
}