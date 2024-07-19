#include <vector>
#include <cmath>

double poly(const std::vector<double>& x, const std::vector<double>& coefficients) {
    double result = 0.0;
    for (size_t i = 0; i < coefficients.size(); ++i) {
        result += coefficients[i] * std::pow(x[0], i);
    }
    return result;
}

std::vector<double> find_zero(const std::vector<double>& coefficients);

int main() {
    std::vector<double> coeffs = {};
  
    for (double coeff : {1.0, -3.0, -2.0, 4.0}) {
        coeffs.push_back(coeff);
    }
    
    std::vector<double> solution = find_zero(coeffs);
    
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}

std::vector<double> find_zero(const std::vector<double>& coefficients) {
    std::vector<double> zeros;
    // Implement the logic to find zeros of the polynomial equation
    // This can be done using numerical methods like Newton's method or other root-finding algorithms
    // For simplicity, you can return an empty vector for now
    return zeros;
}