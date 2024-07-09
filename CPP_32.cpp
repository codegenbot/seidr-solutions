#include <vector>
#include <cmath>

double poly(const vector<double>& coeffs, double x);

double find_zero(const vector<double>& coeffs);

double find_zero(const vector<double>& coeffs){
    double a = coeffs[0];
    double b = coeffs[1];
    return -b/a;
}

double poly(const vector<double>& coeffs, double x){
    double result = 0.0;
    for(int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}