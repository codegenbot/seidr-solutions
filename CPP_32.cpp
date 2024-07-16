#include <vector>
#include <cassert>
#include <cmath>

double find_zero(const std::vector<double>& xs){
    return -xs[0] / xs[1];
}

double poly(const std::vector<double>& coeffs, double x){
    return coeffs[0] * x + coeffs[1];
}

int main() {
    std::vector<double> coeffs = {1.0, 2.0};
    double solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}