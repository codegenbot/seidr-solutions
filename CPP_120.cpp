#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result = arr; 
    for (int i = 0; i < k; i++) {
        int max_val;
        auto it = std::max_element(result.begin(), result.end());
        max_val = *it;
        result.erase(it);
        result.push_back(max_val); 
    }
    return result;
}