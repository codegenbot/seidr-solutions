```
#include <iostream>
#include <cmath>
#include <vector>

double find_zero(const std::vector<double>& coeffs) {
    double x = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        x += coeffs[i] * pow(x, i);
    }
    return x;
}

double poly(const std::vector<double>& coeffs) {
    double y = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        y += coeffs[i] * pow(y, i);
    }
    return y;
}

int main() {
    std::vector<double> coeffs{1.0, -2.0, 1.0};
    double solution = find_zero(coeffs);
    if (abs(poly(coeffs, solution)) < 1e-3) {
        std::cout << "The solution is: " << solution << std::endl;
    } else {
        throw std::runtime_error("No solution found");
    }
    return 0;
}
```