#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

double poly(std::vector<double> xs, double x){
    double result = 0.0;
    for(int i = 0; i < xs.size(); i++){
        result += xs[i]*std::pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

int main(){
    std::vector<double> coeffs = {1, -5, 6};
    double solution = find_zero(coeffs);
    assert (std::abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}