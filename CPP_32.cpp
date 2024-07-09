#include <iostream>
#include <vector>

double poly(std::vector<double> xs, double x) {
    double res = 0;
    for (int i = 0; i <= xs.size() - 1; i++) {
        res += xs[i] * pow(x, xs.size() - 1 - i);
    }
    return res;
}

double find_zero(std::vector<double> coeffs) {
    int n = coeffs.size();
    if (n % 2 != 0)
        return -1;

    double root = -coeffs[1]/(2*coeffs[0]); 
    return std::round(root);
}