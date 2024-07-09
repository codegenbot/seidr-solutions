```cpp
#include <iostream>
#include <vector>

double poly(const std::vector<double>& coeffs, double x) {
    double sum = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        sum += coeffs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(const std::vector<double>& coeffs) {
    double c0 = coeffs[2], c1 = -coeffs[1];
    double solution = (c0 - std::sqrt(c1*c1 - 4*c0*coeffs[0])) / (2*c0);
    return solution;
}

int main() {
    int n, degree; 
    std::cin >> n >> degree;

    std::vector<double> coeffs(degree+1);

    for (int i = 0; i <= degree; i++) {
        double coeff;
        std::cin >> coeff;
        coeffs[i] = coeff;
    }

    double x; 
    std::cin >> x;
    
    // Call poly function with input values
    double sum = poly(coeffs, x);
    std::cout << "The polynomial evaluation at x = " << x << " is: " << sum << std::endl;

    // Calculate the root using find_zero function
    double solution = find_zero({coeffs[0], coeffs[1], coeffs[2]});

    return 0;
}