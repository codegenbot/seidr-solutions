```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        int max_val = *std::max_element(arr.begin(), arr.end());
        result.push_back(max_val);
        arr.erase(std::remove(arr.begin(), arr.end(), max_val), arr.end());
    }
    return result;
}