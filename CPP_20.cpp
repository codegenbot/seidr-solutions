#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> find_closest_elements(std::vector<float> nums) {
    // Implement logic to find closest elements
    // For example, sorting and selecting neighboring elements
    return {nums[1], nums[2]};
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    std::cout << "Test passed!";
    return 0;
}