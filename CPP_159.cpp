#include <vector> // Include the necessary header

bool issame(std::vector<int> a, std::vector<int> b) { // Fix the function signature
    return a == b; // Check if the vectors are the same
}

int main() {
    assert (issame(eat(4, 5, 1), {5, 0})); // Call the eat function in main

    return 0;
}