#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, coeffs.size() - 1 - i);
    }
    return result;
}

double find_zero(std::vector<double> xs) {
    if (xs.size() != 4) { 
        return -1; 
    }
    double a = xs[0];
    double b = xs[1];
    double c = xs[2];
    double d = xs[3];
    
    double x = (-b + sqrt(pow(b, 2) - 4 * a * (c))) / (2 * a);
    return round(x, 2);
}

int main() {
    std::vector<double> coeffs = {1.0, -3.0, 3.0, -1.0};
    double solution = find_zero(coeffs);
    
    // Check the result
    assert(abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}