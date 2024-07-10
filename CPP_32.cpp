#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

double find_zero(const std::vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

double poly(const std::vector<double>& coeffs, double x){
    double result = 0.0;
    for(int i = 0; i < coeffs.size(); ++i){
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

int main(){
    std::vector<double> coeffs = {2, -3, 1};
    std::vector<double> xs = {1, 2};
    double solution = find_zero(xs);
    assert (std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}