#include <vector>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs) {
    double x = 1.0;
    double tolerance = 1e-6;
    while (true) {
        double fx = poly(coeffs, x);
        if (abs(fx) < tolerance) {
            return x;
        }
        x -= fx / poly({coeffs[0], coeffs[2]}, x);
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<double> coeffs = {};
    for (int i = 0; i < n; i++) {
        double val;
        std::cin >> val;
        coeffs.push_back(val); 
    }
    double solution = find_zero(coeffs); 
    assert(abs(poly(coeffs, solution)) < 1e-3);
    std::cout << std::fixed << std::setprecision(2) << solution << std::endl;
    return 0;
}