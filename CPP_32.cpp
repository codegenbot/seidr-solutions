#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

double poly(std::vector<double> coeffs, double x){
    double result = 0.0;
    int power = coeffs.size() - 1;
    for(double coeff : coeffs){
        result += coeff * pow(x, power);
        power--;
    }
    return result;
}

double abs(double x){
    return x >= 0 ? x : -x;
}

double find_zero(std::vector<double> coeffs){
    double a = coeffs[0];
    double b = coeffs[1];
    return -b/a;
}

int main(){
    std::vector<double> coeffs = {1.0, -3.0, 2.0};
    double solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    return 0;
}