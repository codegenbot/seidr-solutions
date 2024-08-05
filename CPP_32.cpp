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

double find_zero(const std::vector<double>& coeffs){
    double a = coeffs[0];
    double b = coeffs[1];
    return std::abs(poly(coeffs, -b/a)) < 1e-3;
}

int main(){
    std::vector<double> coeffs = {1.0, -2.0, 1.0}; // example coefficients of x^2 - 2x + 1
    double solution = find_zero(coeffs);
    assert(solution);
    
    return 0;
}