#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> maximum(const std::vector<int>& arr, int k) {
    std::vector<int> result;
    for (int i = 0; i <= arr.size() - k; ++i) {
        int max_val = arr[i];
        for (int j = 1; j < k; ++j) {
            max_val = std::max(max_val, arr[i + j]);
        }
        result.push_back(max_val);
    }
    return result;
}