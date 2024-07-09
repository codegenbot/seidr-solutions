#include <iostream>
#include <vector>
#include <cmath>

double find_zero(std::vector<double> coeffs){
    int n = coeffs.size();
    double a = coeffs[n/2];
    double b = 0;
    std::vector<double> zero_coeffs;
    for (int i = 0; i < n/2; i++) {
        b -= coeffs[i] / a * pow(a, 2*i);
    }
    double solution = -b / (2*a);

    return solution;
}

int main() {
    std::vector<double> input_coeffs; 
    double output_solution = find_zero(input_coeffs); 

    return 0;
}