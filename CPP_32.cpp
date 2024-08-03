#include <iostream>
#include <vector>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x){
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

int main(){
    int n;
    std::cout << "Enter the number of coefficients: ";
    std::cin >> n;

    std::vector<double> coeffs;
    for(int i = 0; i < n; i++){
        double coeff;
        std::cout << "Enter coefficient " << i << ": ";
        std::cin >> coeff;
        coeffs.push_back(coeff);
    }

    double solution = find_zero(coeffs);
    std::cout << "Solution: " << solution << std::endl;

    return 0;
}