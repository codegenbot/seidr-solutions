#include <iostream>
#include <vector>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x){
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

int main() {
    std::vector<double> coeffs;
    
    int n;
    std::cout << "Enter the number of coefficients: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++){
        double coeff;
        std::cout << "Enter coefficient " << i << ": ";
        std::cin >> coeff;
        coeffs.push_back(coeff);
    }
    
    double x;
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    
    double result = poly(coeffs, x);
    
    std::cout << "Result of polynomial evaluation: " << result << std::endl;
    
    return 0;
}