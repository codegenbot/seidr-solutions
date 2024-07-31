#include <iostream>
#include <vector>
#include <cmath>

double poly(const std::vector<double>& polyCoeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < polyCoeffs.size(); i++) {
        result += polyCoeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& polyCoeffs) {
    double x = 1.0;
    double tol = 1e-6;
    while (true) {
        double fx = poly(polyCoeffs, x);
        if (abs(fx) < tol) {
            return x;
        }
        x -= fx / poly({polyCoeffs[1], -polyCoeffs[0]}, x);
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<double> polyCoeffs(n);  
    for (int i = 0; i < n; i++) {
        double val;
        std::cin >> val;
        polyCoeffs[i] = val; 
    }
    double solution = find_zero(polyCoeffs); 
    assert(abs(poly(polyCoeffs, solution)) < 1e-3);
    std::cout << std::fixed << std::setprecision(2) << solution << std::endl;
    return 0;
}