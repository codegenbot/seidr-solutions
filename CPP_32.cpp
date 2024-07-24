#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i <= (int)coeffs.size() - 1; ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double abs(double num) {
    if (num < 0)
        return -num;
    else
        return num;
}

double find_zero(std::vector<double> xs){
    double x = -xs[1] / (2*xs[0]);
    return poly(xs,x) == 0 ? x : 0;
}