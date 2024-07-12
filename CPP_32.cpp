#include <vector>
#include <cassert>
#include <cmath>

double find_zero(std::vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    return -b / a;
}

double poly(std::vector<double> coeffs, double x){
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

int main(){
    std::vector<double> coeffs = {2.0, -3.0, 1.0}; // example coefficients
    double solution;
    solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}