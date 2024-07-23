#include <vector>
#include <cmath>
#include <iostream>

double poly(vector<double> coeffs, double root) {
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(root, i);
    }
    return result;
}

double find_zero(std::vector<double>& coeffs){
    double sum = 0;
    for(auto &coeff : coeffs) {
        sum += coeff;
    }
    return sum / coeffs.size();
}

int main() {
    std::vector<double> coeffs;
    std::cout << "Enter coefficients (space separated): ";
    for(double &coeff : getline(cin, coeffs)) {
        coeffs.push_back(coeff);
    }
    double root = find_zero(coeffs);
    double value = poly(coeffs, root);
    std::cout << "Value is: " << value << std::endl;
    
    return 0;
}