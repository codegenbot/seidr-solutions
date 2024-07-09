#include <iostream>
#include <vector>
#include <cmath>

double poly(std::vector<double> orig_coeffs, double x) {
    double sum = 0;
    for (int i = 0; i < orig_coeffs.size(); i++) {
        sum += orig_coeffs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(std::vector<double> coeffs, double precision) {
    std::vector<double> new_coeffs(coeffs); 
    double root = 1;

    while (true) {
        double poly_val = poly(new_coeffs, root);
        if (abs(poly_val) < precision)
            break;
        root -= poly_val / poly(new_coeffs, root);
    }
    return root;
}

int main() {
    std::vector<double> coeffs;
    int n;
    std::cout << "Enter the number of coefficients: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        double coeff;
        std::cout << "Enter coefficient " << i + 1 << ": ";
        std::cin >> coeff;
        coeffs.push_back(coeff);
    }

    double solution = find_zero(coeffs, 0.00001);
    std::cout << "The zero of the polynomial is: " << solution << std::endl;

    return 0;
}