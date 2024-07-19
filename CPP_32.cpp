#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double poly(double x, std::vector<double> coeffs){
    double result = 0.0;
    for(int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> xs, std::vector<double> coeffs){
    double a = poly(xs[0], coeffs);
    double b = poly(xs[1], coeffs);
    return -b/a;
}