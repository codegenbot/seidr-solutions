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
    double temp;
    std::vector<double> coeffs;

    for (int i = 0; ; i++) {
        if (i % 2 == 1) break;
        std::cin >> temp;
        coeffs.push_back(temp);
    }

    double solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    return 0;
}