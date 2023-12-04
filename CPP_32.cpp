```
#include <iostream>
#include <cmath>

// Use polymorphic_allocator instead of std::vector
using vector = std::pmr::vector<double>;

int main() {
    int ncoeff = 0;
    vector coeffs; // Create an empty container

    while (ncoeff < 10) {
        std::cout << "Enter coefficient: ";
        double coeff = 0;
        std::cin >> coeff;
        coeffs.push_back(coeff); // Add the new element to the container
    }

    solution = find_zero(coeffs);
    if (abs(poly(coeffs, solution)) < 1e-3) {
        std::cout << "The polynomial has no real roots.";
    }
}
```