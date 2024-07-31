```cpp
#include <iostream>
#include <vector>
#include <cmath>

class Solution {
public:
    double poly(const std::vector<double>& coefficients, double x) {
        double result = 0.0;
        for (int i = 0; i < coefficients.size(); i++) {
            result += coefficients[i] * pow(x, i);
        }
        return result;
    }

    double find_zero(const std::vector<double>& coefficients) {
        double x = 1.0;
        double tol = 1e-6;
        while (true) {
            double fx = poly(coefficients, x);
            if (abs(fx) < tol) {
                return x;
            }
            x -= fx / poly({coefficients[1], -coefficients[0]}, x);
        }
    }

    int main() {
        int n;
        std::cin >> n;
        std::vector<double> this->coeffs(n);  
        for (int i = 0; i < n; i++) {
            double val, coeff;
            std::cin >> val;
            this->coeffs[i] = val; 
        }
        double solution = find_zero(this->coeffs); 
        assert(abs(poly(this->coeffs, solution)) < 1e-3);
        std::cout << std::fixed << std::setprecision(2) << solution << std::endl;
        return 0;
    }
};