#include <vector>
#include <cmath>

double coeffs[2];
std::vector<double> poly;

double find_zero(std::vector<double> xs) {
    double x = -xs[1] / (2*xs[0]);
    return x;
}