#include <iostream>
#include <vector>
#include <cmath>

// Function to calculate the polynomial value for a given coefficient and x
double poly(std::vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

// Function to find the zero of a polynomial
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

int main() {
    std::vector<double> xs; // Your code here
    double result = find_zero(xs); // Your code here
    std::cout << "The zero of the polynomial is: " << result << std::endl;
    return 0;
}