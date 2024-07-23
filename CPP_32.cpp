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
    double solution;

    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        double val;
        cin >> val;
        coeffs.push_back(val);
    }

    solution = find_zero(coeffs);

    double value = poly(coeffs, solution);
    std::cout << "Value is: " << value << std::endl;

    return 0;
}