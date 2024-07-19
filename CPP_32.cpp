#include <vector>
#include <cmath>

double poly(vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    double c = xs[2];
    double discriminant = b * b - 4 * a * c;
    double x1 = (-b + sqrt(discriminant)) / (2 * a);
    double x2 = (-b - sqrt(discriminant)) / (2 * a);
    return x1;
}