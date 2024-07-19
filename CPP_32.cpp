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
    if (coefficients.size() == 3) {
        double a = coefficients[0];
        double b = coefficients[1];
        double c = coefficients[2];
        
        double discriminant = b * b - 4 * a * c;
        
        if (discriminant >= 0) {
            double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
            double root2 = (-b - std::sqrt(discriminant)) / (2 * a);
            
            zeros.push_back(root1);
            zeros.push_back(root2);
        }
    }
    return zeros;
}

int main() {
    std::vector<double> coefficients;
  
    for (double coeff : {1.0, -3.0, -2.0, 4.0}) {
        coefficients.push_back(coeff);
    }
    
    std::vector<double> solution = find_zero(coefficients);
    
    assert(std::abs(poly(solution, coefficients)) < 1e-3);
    
    return 0;
}