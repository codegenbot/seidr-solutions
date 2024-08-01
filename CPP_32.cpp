#include <vector>
#include <cmath>
#include <cassert>

double poly(const std::vector<double>& coeffs, double x){
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs){
    double a = coeffs[0];
    double b = coeffs[1];
    return -b/a;
}

int main() {
    std::vector<double> coeffs;
    coeffs.push_back(1);
    coeffs.push_back(-5);
    coeffs.push_back(6);

    double solution = find_zero(coeffs);

    assert(std::abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}