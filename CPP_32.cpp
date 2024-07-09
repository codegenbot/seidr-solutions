```cpp
#include <iostream>
#include <vector>
#include <cmath>

double find_zero(std::vector<double> coeffs){
    double sum = 0;
    for (int i = 1; i < coeffs.size(); i++) {
        if (i % 2 == 0) {
            sum += coeffs[i] / coeffs[0];
        }
    }
    return -sum / coeffs[0];
}

double poly(std::vector<double> coeffs, double x) {
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++) {
        if(i % 2 == 1) {
            result += coeffs[i] * pow(x, (coeffs.size() - 1 - i) / 2.0);
        }
    }
    return result;
}

int main() {
    std::vector<double> coeffs; 
    coeffs.push_back(1.0); coeffs.push_back(-7.0); coeffs.push_back(12.0); coeffs.push_back(-6.0);
    double solution = find_zero(coeffs);
    if (abs(poly(coeffs, solution)) > 1e-3) {
        std::cout << "Error: The zero of the polynomial is not accurate." << std::endl;
    } else {
        std::cout << "The zero of the polynomial is: " << solution << std::endl;
    }
    return 0;
}