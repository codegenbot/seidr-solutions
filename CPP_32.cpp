#include <iostream>
#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x);

int main() {
    int n;
    std::cin >> n;

    std::vector<double> coeffs(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> coeffs[i];
    }
    
    double x;
    std::cin >> x;

    double result = poly(coeffs, x);
    std::cout << result << std::endl;

    return 0;
}

double poly(std::vector<double> coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}