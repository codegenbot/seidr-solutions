#include <iostream>
#include <vector>
#include <cmath>

double poly(std::vector<double> xs, double x){
    double result = 0.0;
    for(int i = 0; i < xs.size(); i++){
        result += xs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> xs){
    return -xs[0] / xs[1];
}

int main(){
    std::vector<double> coeffs = {1.0, -3.0, 2.0}; // Example coefficient values
    double solution;
    solution = find_zero(coeffs);
    assert (std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}