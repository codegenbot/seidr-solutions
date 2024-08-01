#include <iostream>
#include <vector>
#include <cassert>

double poly(std::vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

int main(){
    std::vector<double> coeffs = {2.0, 5.0};  // Example coefficients for the polynomial

    assert(coeffs.size() >= 2);  // Ensure there are at least two coefficients provided

    double result = poly(coeffs);

    std::cout << "Zero of the polynomial: " << result << std::endl;

    return 0;
}