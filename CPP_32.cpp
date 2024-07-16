#include <vector>
#include <cmath>

double find_zero(const std::vector<double>& xs){
    return -xs[0] / xs[1];
}

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0;
    for (size_t i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

int main() {
    std::vector<double> coeffs = {1, -2, 1};
    double solution;
    
    solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}