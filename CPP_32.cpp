#include <iostream>
#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> xs){
    double sum = 0;
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            sum += xs[i] / xs[0];
        }
    }
    return -sum / xs[0];
}

int main() {
    std::vector<double> coeffs;
    double temp;

    while (true) {
        std::cin >> temp;
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter a valid number." << std::endl;
            break;
        }
        coeffs.push_back(temp);
    }

    if(coeffs.size() == 0){
        std::cout << "No coefficients entered. Cannot find zero." << std::endl;
    } else {
        double solution = find_zero(coeffs);
        assert(abs(poly(coeffs, solution)) < 1e-3);
    }
    return 0;
}