```
#include <vector>
#include <algorithm>

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < k; ++i) {
        // result is not declared
        std::vector<int> result;
        result.push_back(arr.back());
        arr.pop_back();
    }
    return arr;
}