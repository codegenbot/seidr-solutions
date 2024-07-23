```cpp
#include <iostream>
#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> coeffs) {
    double x = 1.0;
    const double epsilon = 1e-6;

    while (true) {
        double p = poly(coeffs, x);
        if (std::abs(p) < epsilon)
            break;
        x -= p / poly({coeffs[0], coeffs[1], coeffs[2]}, x);
    }
    return x;
}

int main() {
    std::vector<double> coeffs = {3, -12, 12, -4};
    
    double solution = find_zero(coeffs);
    for (double i = 1.5; i < 3.0; i += 0.05) {
        double val = poly(coeffs, i);
        assert(std::abs(val)< 1e-3); 
    }
}