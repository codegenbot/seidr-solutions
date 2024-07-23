```cpp
#include <vector>
#include <cmath>

std::vector<double> poly = {1, -7, 11, -6};
std::vector<double> coeffs = {1, -3};

double find_zero(std::vector<double> xs){
    double x = -xs[1] / (2*xs[0]);
    return x;
}