#include <vector>
#include <cmath>

std::vector<double> coeffs;
double coeff;
int n;

double find_zero(std::vector<double> coeffs);
double poly(std::vector<double> coeffs, double solution);

int main() {
    std::cout << "Enter the number of coefficients: ";
    std::cin >> n;

    std::vector<double> coeffs = {};
    coeffs.resize(n);

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter coefficient " << i+1 << ": ";
        std::cin >> coeff;
        coeffs[i] = coeff;
    }

    double solution = find_zero(coeffs); 
    assert(std::abs(poly(coeffs, solution)) < 1e-3); 
    return 0;
}

double find_zero(std::vector<double> coeffs) {
    // Your code here
}

double poly(std::vector<double> coeffs, double solution) {
    // Your code here
}