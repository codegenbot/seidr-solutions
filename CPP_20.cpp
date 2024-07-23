#include <iostream>
#include <vector>
#include <cassert>

std::vector<float> find_closest_elements(const std::vector<float>& values) {
    // Your implementation for finding closest elements here
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    // Your implementation for checking if two vectors are the same here
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    std::cout << "Test Passed" << std::endl;
    return 0;
}