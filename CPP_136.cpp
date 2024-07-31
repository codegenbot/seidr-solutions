#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> largest_smallest_integers(const std::vector<int>& nums) {
    int largest = *std::max_element(nums.begin(), nums.end());
    int smallest = *std::min_element(nums.begin(), nums.end());
    return {smallest, largest};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-100, 1}));
    
    return 0;
}