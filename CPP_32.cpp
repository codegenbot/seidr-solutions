#include <vector>
#include <cmath>

double find_zero(std::vector<double> xs);
double poly(std::vector<double> coeffs, double x);

// Your code here

double find_zero(vector<double> xs){
    double x = 1;
    for (int i = 2; i < xs.size(); i += 2) {
        while (poly(coeffs, x) > 0) {
            x -= 0.001;
        }
        while (poly(coeffs, x) < 0) {
            x += 0.001;
        }
    }
    return std::round(x, 2);
}

double poly(vector<double> coeffs, double x){
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * pow(x, (coeffs.size() - 1) - i);
    }
    return result;
}