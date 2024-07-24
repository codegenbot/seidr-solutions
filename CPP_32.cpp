#include <vector>
#include <cmath>

std::vector<double> coeffs; // declare and define the "coeffs" vector

double poly(const std::vector<double>& xs, double x) {
    double result = 0;
    for (int i = 0; i < xs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> xs){
    double x = 1;
    for (int i = 2; i < xs.size(); i += 2) {
        while (poly(xs, x) > 0) {
            x -= 0.001;
        }
        while (poly(xs, x) < 0) {
            x += 0.001;
        }
    }
    return round(x, 2);
}