#include <vector>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x){
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

int main() {
    std::vector<double> coeffs = {1, 2, 3}; // example coefficients
    double solution = poly(coeffs, 2.0); // example x value
    return 0;
}