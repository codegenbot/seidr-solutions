#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

double poly(const std::vector<double>& coeffs, double x){
    double result = 0.0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

bool find_zero(const std::vector<double>& coeffs){
    return std::abs(poly(coeffs, -coeffs[1]/coeffs[0])) < 1e-3;
}

int main(){
    std::vector<double> coeffs = {1.0, -2.0, 1.0}; // example coefficients of x^2 - 2x + 1
    bool isZero = find_zero(coeffs);
    assert(isZero);
    
    return 0;
}