```
#include <iostream>
#include <cmath>
#include <vector>
using std::vector;

float find_zero(const vector<double>& coefficients) {
    float x = 0;
    for (int i = 0; i < coefficients.size(); i++) {
        x += coefficients[i] * pow(x, i);
    }
    return x;
}

float poly(const vector<double>& coefficients) {
    float y = 0;
    for (int i = 0; i < coefficients.size(); i++) {
        y += coefficients[i] * pow(y, i);
    }
    return y;
}

int main() {
    vector<double> coefficients{1.0, -2.0, 1.0};
    float solution = find_zero(coefficients);
    if (std::abs(poly(coefficients, solution)) < 1e-3) {
        std::cout << "The solution is: " << solution << std::endl;
    } else {
        throw std::runtime_error("No solution found");
    }
    return 0;
}
```