#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> arr) {
    int largest = *std::max_element(arr.begin(), arr.end());
    int smallest = *std::min_element(arr.begin(), arr.end());
    return {smallest, largest};
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-100, 1}));
    
    return 0;
}