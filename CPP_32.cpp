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
    if (coeffs.empty()) return 0.0;

    double a = coeffs[0];
    double b = coeffs.size() > 1 ? coeffs[1] : 0.0;

    return (a != 0.0) ? (-b/a) : 0.0;
}

int main() {
    std::vector<double> coeffs = {1, -5, 6};

    double solution = find_zero(coeffs);

    assert(std::abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}