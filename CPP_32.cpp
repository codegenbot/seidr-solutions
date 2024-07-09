#include <vector>
#include <cmath>

double poly(const std::vector<double>& coeffs, double solution) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); ++i) {
        if (i % 2 == 1) {
            result -= coeffs[i] * pow(solution, i+1);
        } else {
            result += coeffs[i];
        }
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs) {
    double solution = 0;
    for (int i = 0; i < coeffs.size(); ++i) {
        if (i % 2 == 1) {
            solution -= coeffs[i] / pow(1 + solution, i+1);
        } else {
            solution += coeffs[i];
        }
    }
    return solution;
}

int main() {
    std::vector<double> coeffs; 
    double coeff; 
    int n;
    std::cout << "Enter the number of coefficients: ";
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter coefficient " << i+1 << ": ";
        std::cin >> coeff;
        coeffs.push_back(coeff);
    }
    
    double solution = find_zero(coeffs); 
    assert(abs(poly(coeffs, solution)) < 1e-3); 
    return 0;
}