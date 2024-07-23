#include <iostream>
#include <algorithm>
#include <vector>

// Function to compare two vectors
bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> sort_array(std::vector<int> array) {
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 0) {
        std::sort(array.begin(), array.end(), std::greater<int>());
    } else {
        std::sort(array.begin(), array.end());
    }
    return array;
}

int main() {
    // Test the function
    assert(issame(sort_array({21, 14, 23, 11}) , {23, 21, 14, 11}));
    return 0;
}