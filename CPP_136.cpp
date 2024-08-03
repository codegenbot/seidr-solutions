#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> numbers) {
    int smallest = *std::min_element(numbers.begin(), numbers.end());
    int largest = *std::max_element(numbers.begin(), numbers.end());
    
    return { smallest, largest };
}