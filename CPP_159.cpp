#include <vector> // Include the vector header file

bool issame(std::vector<int> a, std::vector<int> b) { // Fix function signature
    return a == b; // Compare vectors for equality
}

std::vector<int> eat(int number, int need, int remaining) { // Specify the namespace for vector
    int totalCarrots = number + need;
    int carrotsLeft = std::max(0, remaining - need); // Specify the namespace for max
    return {totalCarrots, carrotsLeft};
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0})); // Add appropriate assert statement
    return 0;
}