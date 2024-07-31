#include <iostream>
#include <vector>

double poly(std::vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

std::vector<double> find_zeros(std::vector<double> xs) {
    std::vector<double> zeros;
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            double x = -xs[0] / xs[i];
            while (std::abs(poly({xs[0], xs[i]}, x)) > 1e-6) {
                x -= poly({xs[0], xs[i]}, x) / poly({1, 2*x}, x);
            }
            zeros.push_back(x);
        }
    }
    return zeros;
}

int main() {
    std::vector<double> coeffs = {1, -7, 12};
    std::vector<double> xs = {1, 2, 3};
    std::vector<double> zeros = find_zeros(xs);
    for (double zero : zeros) {
        std::cout << "Zero: " << zero << std::endl;
    }
    return 0;
}