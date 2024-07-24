#include <vector>
#include <cmath>

double poly(std::vector<double> xs, double x) {
    double result = xs[0] * pow(x,2) + xs[1]*x + xs[2];
    return result;
}

std::vector<double> coeffs; 

double find_zero(std::vector<double> xs){
    double x = -xs[1] / (2*xs[0]);
    return poly(xs,x) == 0 ? x : 0;
}

int main() {
    coeffs = {1.0, -3.5, 2.25}; 
    double solution = find_zero(coeffs); 
    assert (abs(poly(coeffs, solution))< 1e-3);
}