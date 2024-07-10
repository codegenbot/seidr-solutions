#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::pair<int, int> largest_smallest_integers(const std::vector<int>& nums) {
    int largest = *std::max_element(nums.begin(), nums.end());
    int smallest = *std::min_element(nums.begin(), nums.end());
    return std::make_pair(smallest, largest);
}

bool is_same(const std::pair<int, int>& pair1, const std::pair<int, int>& pair2) {
    return pair1 == pair2;
}

int main() {
    assert(is_same(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), std::make_pair(-100, 1)));
    return 0;
}