#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

double poly(vector<double> coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs) {
    double a = coeffs[0];
    double b = coeffs[1];
    return -b / a;
}

vector<double> coeffs = {1, -3, 2};
double solution = find_zero(coeffs);
assert(std::abs(poly(coeffs, solution)) < 1e-3); // Use std::abs instead of abs