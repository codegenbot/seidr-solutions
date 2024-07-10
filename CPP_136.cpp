#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a == b;
}

std::pair<int, int> largest_smallest_integers(const std::vector<int>& nums) {
    int largest = *std::max_element(nums.begin(), nums.end());
    int smallest = *std::min_element(nums.begin(), nums.end());
    return {smallest, largest};
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), std::make_pair(-100, 1)));
    return 0;
}