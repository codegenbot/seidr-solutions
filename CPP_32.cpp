#include <iostream>
#include <vector>
#include <cmath>

double poly(std::vector<double> poly_coeffs, double x) {
    double result = 0;
    for (int i = 0; i < poly_coeffs.size(); i++) {
        result += poly_coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> poly_coeffs){
    double sum = 0;
    for (int i = 1; i < poly_coeffs.size(); i++) {
        if (i % 2 == 0) {
            sum += poly_coeffs[i] / poly_coeffs[0];
        }
    }
    return -sum / poly_coeffs[0];
}

int main() {
    std::vector<double> poly_coeffs;
    double temp;

    poly_coeffs = {};
    while (true) {
        std::cin >> temp;
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter a valid number." << std::endl;
            break;
        }
        poly_coeffs.push_back(temp);
    }

    if(poly_coeffs.size() == 0){
        std::cout << "No coefficients entered. Cannot find zero." << std::endl;
    } else {
        double solution = find_zero(poly_coeffs);
        assert(abs(poly(poly_coeffs, solution)) < 1e-3);
    }
    return 0;
}