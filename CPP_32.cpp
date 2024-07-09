#include <vector>
#include <cmath>
#include <cassert>

double poly(const std::vector<double>& coeffs, double x){
    double result = 0.0;
    int power = coeffs.size() - 1;
    for(double coeff : coeffs){
        result += coeff * std::pow(x, power);
        power--;
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs){
    double a = coeffs[0];
    double b = coeffs[1];
    return -b/a;
}

int main() {
    std::vector<double> coeffs = {1.0, -1.0};
    double solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}