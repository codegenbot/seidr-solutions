#include <vector>
#include <cmath>

std::vector<double> poly = {1, -3};
std::vector<double> coeffs = {-2, 4};

double find_zero(std::vector<double> xs) {
    double x = -xs[1] / (2*xs[0]);
    return x;
}