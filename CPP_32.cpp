```
#include <iostream>
#include <vector>

int main() {
    std::vector<double> coeffs = {1.0, -2.0, 1.0};
    double solution;

    auto it = coeffs.begin();
    while (it != coeffs.end()) {
        // Perform any necessary operations on the elements of the vector here
        ++it;
    }

    if (abs(solution) < 1e-3) {
        std::cout << "The solution is: " << solution << std::endl;
    } else {
        throw std::runtime_error("No solution found");
    }

    return 0;
}
```