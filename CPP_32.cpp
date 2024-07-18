#include <vector>
#include <cassert>

std::vector<double> coeffs(std::vector<double> xs) {
    assert(xs.size() >= 2);
    return {xs[0], xs[1]};
}

double findRoot(std::vector<double> xs) {
    double a = xs[0];
    double b = xs[1];
    return -b / a;
}