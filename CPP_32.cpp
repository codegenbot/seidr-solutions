#include <vector>
#include <cmath>
#include <iostream>

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