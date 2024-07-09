#include <vector>
#include <cmath>
#include <initializer_list>

std::vector<double> coeffs;
double coeff;
int n;

double find_zero(std::vector<double> coeffs);
double poly(std::vector<double> coeffs, double solution);

int main() {
    std::cout << "Enter the number of coefficients: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter coefficient " << i+1 << ": ";
        std::cin >> coeff;
        coeffs.push_back(coeff);
    }

    double solution = find_zero(coeffs); 
    assert(std::abs(poly(coeffs, solution)) < 1e-3); 
    return 0;
}

double find_zero(std::vector<double> coeffs) {
    double sum = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        sum += coeffs[i] / pow(2, i);
    }
    return -sum;
}

double poly(std::vector<double> coeffs, double solution) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(solution, i);
    }
    return result;