```
#include <vector>
#include <cmath>

double find_zero(vector<double> xs) {
    if(xs.size() % 2 != 0) return -1; 
    double root = poly(0, &xs[0], &xs[xs.size()]);
    return std::round(root);
}

double poly(double x, const double*coeffs, const double*end) {
    double result = 0;
    for (; coeffs < end; ++coeffs) {
        result += *coeffs * pow(x, coeffs - coeffs[0]);
    }
    return result;
}