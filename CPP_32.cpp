#include <vector>
#include <cmath>

double find_zero(const std::vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

double poly(const std::vector<double>& coeffs, double solution){
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i){
        result += coeffs[i] * std::pow(solution, i);
    }
    return result;
}

int main(){
    std::vector<double> coeffs = {1.0, 2.0, 3.0}; // Example coefficients
    double solution = 0.0;
    solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}