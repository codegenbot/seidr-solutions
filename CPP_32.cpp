#include <iostream>
#include <vector>
#include <cmath>

double poly(std::vector<double> coefs, double x) {
    double result = 0;
    for (int i = 0; i < coefs.size(); i++) {
        result += coefs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> coefs){
    double sum = 0;
    for (int i = 1; i < coefs.size(); i++) {
        if (i % 2 == 0) {
            sum += coefs[i] / coefs[0];
        }
    }
    return -sum / coefs[0];
}

int main() {
    std::vector<double> coefs = {};

    for (double &temp; ; ) {
        std::cin >> temp;
        if (std::cin.fail()) break;
        coefs.push_back(temp);
    }

    double solution = find_zero(coefs);
    assert(abs(poly(coefs, solution)) < 1e-3);
    return 0;
}