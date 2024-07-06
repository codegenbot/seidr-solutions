```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<std::vector<int>> arr, int k) {
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        auto it = max_element(arr[0].begin(), arr[0].end());
        result.push_back(*it);
        arr[0].erase(it);
    }
    return result;
}