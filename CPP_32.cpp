```
#include <cassert>
#include <vector>

double poly(const std::vector<double>& coeffs, double x) {
    // Implement the function to calculate the value of the polynomial at point x
}

int main() {
    std::vector<double> coeffs = {1.0, -2.0, 1.0};
    double solution = find_zero(coeffs);
    if (abs(poly(coeffs, solution)) < 1e-3) {
        std::cout << "The solution is: " << solution << std::endl;
    } else {
        throw std::runtime_error("No solution found");
    }
    return 0;
}
```