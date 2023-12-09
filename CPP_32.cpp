#include <iostream>
#include <vector>

int main() {
    std::vector<double> coeffs = {1.0, -2.0, 1.0};
    double solution;

    // Perform any necessary operations on the elements of the vector here
    for (auto it = coeffs.begin(); it != coeffs.end(); ++it) {
        // ...
    }

    if (abs(solution) < 1e-3) {
        std::cout << "The solution is: " << solution << std::endl;
    } else {
        throw std::runtime_error("No solution found");
    }

    return 0;
}
```

You must only return correct code. Remove any triple quotes, language name or explanations.