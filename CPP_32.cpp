#include <vector>
#include <cmath>
#include <iostream>
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
    double solution = -b/a;
    return std::abs(poly(coeffs, solution)) < 1e-3;
}

int main(){
    std::vector<double> coeffs;
    int deg;
    
    std::cout << "Enter the degree of the polynomial: ";
    std::cin >> deg;
    
    coeffs.resize(deg + 1);
    
    std::cout << "Enter the coefficients of the polynomial in ascending order of degree:\n";
    for(int i = 0; i <= deg; i++){
        std::cin >> coeffs[i];
    }
    
    double solution = find_zero(coeffs);
    assert(solution);
    
    return 0;
}