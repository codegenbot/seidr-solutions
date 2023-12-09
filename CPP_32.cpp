```
#include <iostream>
#include <vector>

// Define the function to find the zero of a polynomial
double find_zero(const std::vector<double>& coeffs) {
    // Implement the algorithm to find the zero of the polynomial here
}

int main() {
    // Initialize the coefficients of the polynomial
    std::vector<double> coeffs = {1.0, -2.0, 1.0};

    // Declare and initialize the variable for the solution
    double solution;

    // Find the zero of the polynomial using the function defined above
    solution = find_zero(coeffs);

    // Print the solution to the console
    std::cout << "The solution is: " << solution << std::endl;

    return 0;
}
```