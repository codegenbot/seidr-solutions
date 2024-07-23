#include <iostream>
#include <vector>
#include <cmath>

std::vector<double> coeffs;
double solution;

double poly(std::vector<double> coeffs, double root) {
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(root, i);
    }
    return result;
}

double find_zero(std::vector<double> coeffs) {
    // implement your zero-finding algorithm here
    return 0.5; 
}

int main() {
    std::cout << "Enter coefficients (separated by spaces): ";
    for(double c; std::cin >> c; ) {
        coeffs.push_back(c);
    }

    double rootValue = 2.5; // example value

    double result = poly(coeffs, rootValue);

    solution = find_zero(coeffs);

    assert(abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}