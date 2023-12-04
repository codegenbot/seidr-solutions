```c++
#include <iostream>
#include <cmath>

int main() {
    std::vector<double> coeffs = {1, 2, 3};
    double solution;
    double target = 0;
    double error;

    // Define the poly function that takes a list of coefficients and a solution as inputs, and returns a value for the polynomial at the given solution.
    auto poly(const std::vector<double>& coeffs, double solution) -> double {
        return std::inner_product(coeffs.begin(), coeffs.end(), 1.0, [](double x, double y) { return x + y; });
    }

    // Find the zero of the polynomial using the find_zero function from the math library.
    solution = find_zero(coeffs);

    // Compute the error between the polynomial and the target value.
    error = abs(poly(coeffs, solution) - target);

    std::cout << "Solution: " << solution << std::endl;
    std::cout << "Error: " << error << std::endl;

    return 0;
}
```