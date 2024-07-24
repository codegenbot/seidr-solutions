#include <vector>
#include <cassert>
#include <cmath>
using namespace std;

double poly(const std::vector<double>& xs, double x){
    double result = 0;
    for(size_t i = 0; i < xs.size(); i++){
        result += xs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

int main(){
    std::vector<double> coeffs = {2, -3, 1}; // Example coefficients of a quadratic equation: 2x^2 - 3x + 1
    double solution;
    
    solution = find_zero(coeffs);
    assert(fabs(poly(coeffs, solution)) < 1e-3);

    return 0;
}