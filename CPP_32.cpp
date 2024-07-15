#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

double poly(vector<double> coeffs, double x){
    double result = 0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i]*pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs){
    double a = coeffs[0];
    double b = coeffs[1];
    return -b/a;
}

std::vector<double> coeffs;
double solution;

for(int i=0; i<2; i++){
    double coeff;
    std::cout << "Enter coefficient " << i+1 << ": ";
    std::cin >> coeff;
    coeffs.push_back(coeff);
}

solution = find_zero(coeffs);

assert(abs(poly(coeffs, solution)) < 1e-3);