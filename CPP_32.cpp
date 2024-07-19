#include <vector>
#include <cmath>
#include <cassert>
using namespace std;

double poly(double x, const vector<double>& coeff){
    double result = 0.0;
    for(int i = 0; i < coeff.size(); i++){
        result += coeff[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& coeffs){
    double a = poly(1.0, coeffs);
    double b = poly(2.0, coeffs);
    return -b/a;
}

vector<double> coeffs = {1.0, 2.0, 1.0};
double solution = find_zero(coeffs);
assert(abs(poly(solution, coeffs)) < 1e-3;