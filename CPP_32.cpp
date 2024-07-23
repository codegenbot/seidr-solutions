#include <vector>
#include <cmath>
#include <cassert>

std::vector<double> coeffs;

double poly(std::vector<double> coeffs, double root) {
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(root, i);
    }
    return result;
}

double find_zero(std::vector<double> coeffs) {
    // implement your zero-finding algorithm here
    double root = -1.0;
    for(int i = 0; i < 1000; i++) {
        if(poly(coeffs, root) == 0)
            return root;
        root += 0.0001;
    }
    return 0.5;
}

int main() {
    coeffs.resize(10);
    for(int i = 0; i < 10; i++)
        cin >> coeffs[i];
    double rootValue = 2.5;
    double result = poly(coeffs, rootValue);
    double solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    return 0;
}