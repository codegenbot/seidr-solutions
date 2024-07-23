#include <vector>
#include <cmath>

std::vector<double> poly;
std::vector<double> coeffs;

double find_zero(std::vector<double> xs) {
    double x = -xs[1] / (2*xs[0]);
    return x;
}