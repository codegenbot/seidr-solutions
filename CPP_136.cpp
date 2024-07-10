#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::pair<int, int> largest_smallest_integers(const std::vector<int>& nums) {
    int largest = *std::max_element(nums.begin(), nums.end());
    int smallest = *std::min_element(nums.begin(), nums.end());
    return {smallest, largest};
}

int main() {
    assert((largest_smallest_integers({-6, -4, -4, -3, -100, 1}) == std::pair<int,int>(-100, 1)));
    assert((largest_smallest_integers({-6, -4, -4, -3, -100, 1}) == std::pair<int,int>(-100, 1))); // Example assert
    return 0;
}