```cpp
#include <vector>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i <= coeffs.size() - 1; ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> coefficients) {
    double x = -coefficients[1] / (2 * coefficients[0]);
    return x;
}

int main() {
    std::vector<double> coefficients;
    // read input from user and store in coefficients
    
    double solution = find_zero(coefficients);
    
    std::vector<double> coeffs = {coefficients[0], coefficients[1]} ;  // declare and initialize coeffs
    assert (abs(poly(coeffs, solution))< 1e-3);  

    return 0;
}