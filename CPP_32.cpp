#include <vector>
#include <cmath>

double find_zero(std::vector<double> xs){
    std::vector<double> coeffs = {xs[1], xs[0]};
    return poly(coeffs, 0);
}