#include <iostream>
#include <vector>
#include <cmath>

std::vector<double> coeffs;
double poly(std::vector<double> polys) {
    double result = 0.0;
    for (int i = 0; i < polys.size(); i++) {
        if (i % 2 == 0)
            result += polys[i];
        else
            result -= pow(1.0, (double)i / 2) * polys[i];
    }
    return result;
}

double find_zero(std::vector<double> xs){
    double a = xs[0];
    double b = 0;
    for (int i = 1; i < xs.size(); i += 2) {
        b -= xs[i] / pow(xs[i-1], i/2);
    }
    return -b / a;
}