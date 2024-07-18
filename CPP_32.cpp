#include <vector>
#include <cassert>

double findRoot(const std::vector<double>& xs) {
    auto coeffs = [](double x) { 
        return x * x - 5; 
    };

    auto poly = [](double x) { 
        return x * x * x - 3 * x + 2; 
    };

    double a = coeffs(xs[0]);
    double b = coeffs(xs[1]);
    return -b / a;
}