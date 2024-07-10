#include <iostream>
#include <vector>

bool issame(int a, int b) {
    // Your custom function implementation here
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    while (k--) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}