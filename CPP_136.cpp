#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::pair<int, int> largest_smallest_integers(const std::vector<int>& nums) {
    int largest = *std::max_element(nums.begin(), nums.end());
    int smallest = *std::min_element(nums.begin(), nums.end());
    return {smallest, largest};
}

int main() {
    assert((largest_smallest_integers({-6, -4, -4, -3, -100, 1}) == std::pair<int,int>(-100, 1)));
    return 0;
}