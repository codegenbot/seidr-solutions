using namespace std;

#include <iostream>
#include <vector>
#include <cmath>

std::vector<double> coeffs;
double poly(std::vector<double>, double);

double find_zero(std::vector<double> xs) {
    double a = xs[0];
    double b = 0;
    for (int i = 1; i < xs.size(); i += 2) {
        b -= xs[i] / pow(xs[i-1], i/2.0);
    }
    return -b / a;
}

double poly(std::vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}