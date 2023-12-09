#include <iostream>
#include <cmath>
#include <boost/container/vector.hpp>

float find_zero(const boost::container::vector<double>& coeffs) {
    float x = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        x += coeffs[i] * pow(x, i);
    }
    return x;
}

float poly(const boost::container::vector<double>& coeffs) {
    float y = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        y += coeffs[i] * pow(y, i);
    }
    return y;
}

int main() {
    boost::container::vector<double> coeffs(3);
    coeffs.emplace_back(1.0);
    coeffs.emplace_back(-2.0);
    coeffs.emplace_back(1.0);
    float solution = find_zero(coeffs);
    if (std::abs(poly(coeffs, solution)) < 1e-3) {
        std::cout << "The solution is: " << solution << std::endl;
    } else {
        throw std::runtime_error("No solution found");
    }
    return 0;
}