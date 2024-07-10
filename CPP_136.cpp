#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> largest_smallest_integers(const std::vector<int>& numbers) {
    int largest = *std::max_element(numbers.begin(), numbers.end());
    int smallest = *std::min_element(numbers.begin(), numbers.end());
    return {smallest, largest};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}