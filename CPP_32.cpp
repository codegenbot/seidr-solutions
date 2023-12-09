```
#include <iostream>
#include <vector>

double find_zero(const std::vector<double>& coeffs) {
    // Implement the function to calculate the roots of the polynomial equation
}

int main() {
    std::vector<double> coeffs = {1.0, -2.0, 1.0};
    double solution = find_zero(coeffs);
    if (abs(poly(solution)) < 1e-3) {
        std::cout << "The solution is: " << solution << std::endl;
    } else {
        throw std::runtime_error("No solution found");
    }
    return 0;
}
```