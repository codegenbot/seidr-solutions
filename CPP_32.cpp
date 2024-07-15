#include <vector>
#include <cassert>
#include <cmath>

double find_zero(const std::vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    
    return -b/a;
}