#include <iostream>
#include <vector>
#include <cassert> // Added to use assert

bool issame(const std::vector<int>& a, const std::vector<int>& b) { // Changed vector to std::vector
    return a == b;
}

std::vector<int> incr_list(const std::vector<int>& l) { // Changed vector to std::vector
    std::vector<int> result = l; // Create a copy of input vector
    
    for (int i = 0; i < result.size(); i++) {
        result[i]++;
    }
    return result;
}

int main() {
    std::vector<int> original = {1, 2, 3, 4, 5};
    std::vector<int> modified = incr_list(original);
    
    if (issame(original, modified)) {
        std::cout << "Lists are the same after incrementing." << std::endl;
    } else {
        std::cout << "Lists are different after incrementing." << std::endl;
    }
    
    // Add assert for testing the function
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    
    return 0;
}