#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> largest_smallest_integers(const std::vector<int>& numbers) {
    int largest = *std::max_element(numbers.begin(), numbers.end());
    int smallest = *std::min_element(numbers.begin(), numbers.end());
    return {smallest, largest};
}

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(is_same(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-100, 1});

    return 0;
}