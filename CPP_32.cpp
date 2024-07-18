#include <vector>
#include <cassert>

std::vector<double> coeffs(std::vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    return {-b, a};
}

double calculate_zero(std::vector<double> xs){
    assert(xs.size() == 2);
    std::vector<double> coefficients = coeffs(xs);
    double a = coefficients[0];
    double b = coefficients[1];
    return -b/a;
}