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
    double a = xs[0];
    double b = xs[1];
    double c = xs[2];
    
    double discriminant = b*b - 4*a*c;
    double sqrt_discriminant = sqrt(discriminant);
    
    double solution1 = (-b + sqrt_discriminant) / (2*a);
    double solution2 = (-b - sqrt_discriminant) / (2*a);
    
    return std::abs(poly(xs, solution1)) < std::abs(poly(xs, solution2)) ? solution1 : solution2;
}

int main(){
    std::vector<double> coeffs = {1.0, -3.0, 2.0}; // Example coefficient values
    double solution;
    solution = find_zero(coeffs);
    assert (std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}