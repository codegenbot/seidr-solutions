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

double find_zero(const std::vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

int main() {
    std::vector<double> coeffs;
    coeffs.push_back(1); // coefficient of x^2
    coeffs.push_back(-5); // coefficient of x
    coeffs.push_back(6); // constant term

    double solution = find_zero(coeffs);

    assert(std::abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}