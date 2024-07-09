#include <iostream>
#include <vector>

// Function to calculate the value of polynomial
double poly(std::vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

// Function to find the zero of polynomial using Newton-Raphson method
double find_zero(std::vector<double> coeffs) {
    double x = 1.0; // initial guess
    while (true) {
        double fx = poly(coeffs, x);
        if (fabs(fx) < 1e-3) break;
        x -= fx / poly(coeffs, x + 0.00001); // avoid division by zero
    }
    return x;
}

int main() {
    int ncoeff; // number of coefficients
    std::cout << "Enter the number of coefficients: ";
    std::cin >> ncoeff;

    std::vector<double> coeffs(ncoeff); // vector to hold coefficients

    for (int i = 0; i < ncoeff; i++) {
        std::cout << "Enter coefficient " << i + 1 << ": ";
        std::cin >> coeffs[i];
    }

    double solution = find_zero(coeffs);
    
    assert (abs(poly(coeffs, solution))< 1e-3);

    return 0;
}