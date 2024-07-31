#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& xs) {
    double a = xs[0];
    double b = xs[1];
    return -b / a;
}

int main() {
    std::vector<double> coeffs;
    coeffs.push_back(1.0);
    coeffs.push_back(-3.0);
    coeffs.push_back(2.0);
    double solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}