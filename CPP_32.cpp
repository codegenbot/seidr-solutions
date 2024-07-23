```cpp
#include <iostream>
#include <vector>
#include <cmath>

double find_zero(const std::vector<double>& coeffs) {
    double x = 1;
    double prevPolyVal = poly(coeffs, 0);
    double currPolyVal;

    while (true) {
        currPolyVal = poly(coeffs, x);

        if (abs(currPolyVal - prevPolyVal) < 1e-6)
            return x;

        prevPolyVal = currPolyVal;
        x -= 0.5;
    }
}

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

int main() {
    // Use the find_zero and poly functions
    std::vector<double> coeffs = {1.0, -2.0, 3.0};
    double x = find_zero(coeffs);
    
    std::cout << "The zero of the polynomial is: " << x << std::endl;
    
    return 0;
}