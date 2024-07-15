#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x){
    double result = 0;
    for (int i = 0; i < coeffs.size(); ++i){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}