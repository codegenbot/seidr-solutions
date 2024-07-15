#include <vector>

// Function prototype declaration
bool issame(const std::vector<float>& a, const std::vector<float>& b);

int main() {
    // Example assertion
    assert(issame(derivative({1}), {}));
}

// Function definition
bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    // Implement the logic here by calling derivative()
    return derivative(a) == derivative(b);
}