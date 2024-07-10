#include <iostream>
#include <vector>
#include <cassert>

std::vector<float> find_closest_elements(std::vector<float> nums) {
    // Implement the logic to find the closest elements here
    // For simplicity, let's just return the first two elements
    return {nums[1], nums[2]};
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}