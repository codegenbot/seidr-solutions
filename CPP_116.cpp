#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    std::vector<int> arr1 = {2, 4, 8, 16, 32};
    std::vector<int> arr2 = {2, 4, 8, 16, 32};
    
    assert(issame(arr1, arr2));
    assert(issame(sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));

    std::cout << "All assertions passed successfully!" << std::endl;

    return 0;
}