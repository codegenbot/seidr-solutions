#include <vector>
#include <cmath>

double poly(std::vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    double discriminant = b * b - 4 * a;
    double x = (-b + std::sqrt(discriminant)) / (2 * a);
    return x;
}