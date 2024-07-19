#include <vector>
#include <cmath>
#include <cassert>

double poly(const std::vector<double>& x, const std::vector<double>& coefficients) {
    double result = 0.0;
    for (size_t i = 0; i < coefficients.size(); ++i) {
        result += coefficients[i] * std::pow(x[0], i);
    }
    return result;
}

std::vector<double> find_zero(const std::vector<double>& coefficients) {
    std::vector<double> zeros;
    double x0 = 0.0;
    double epsilon = 1e-6;
    double dx = 1e-6;
    
    while (true) {
        double fx = poly({x0}, coefficients);
        double fx_prime = (poly({x0 + dx}, coefficients) - fx) / dx;
        double x1 = x0 - fx / fx_prime;
        
        if (std::abs(x1 - x0) < epsilon) {
            zeros.push_back(x1);
            break;
        }
        
        x0 = x1;
    }
    
    return zeros;
}

int main() {
    std::vector<double> coefficients = {1.0, -3.0, -2.0, 4.0};
    std::vector<double> coeffs;
    
    for (double coeff : coefficients) {
        coeffs.push_back(coeff);
    }
    
    auto solution = find_zero(coeffs);
    
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}