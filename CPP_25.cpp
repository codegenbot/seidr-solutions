bool is_same(std::vector<int> a, std::vector<int> b); // Correct function signature

bool is_same(std::vector<int> a, std::vector<int> b) { // Fix function name and add correct syntax for vector type
    // Your existing code for is_same function
}

int main() {
    if (is_same(factorize(3 * 2 * 3), std::vector<int>{2, 3, 3})) { // Use is_same instead of assert
        std::cout << "Test passed" << std::endl;
    }
    else {
        std::cout << "Test failed" << std::endl;
    }
    return 0;
}