#include <vector>
#include <cmath>

double find_zero(std::vector<double> xs){
    std::vector<double> coeffs = xs;
    return -coeffs[0] / coeffs[1];
}