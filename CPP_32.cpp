#include <vector>
#include <cmath>

double poly(double x, vector<double> coeffs){
    double result = 0.0;
    for(int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs, vector<double> coeffs){
    double a = poly(xs[0], coeffs);
    double b = poly(xs[1], coeffs);
    return -b/a;
}