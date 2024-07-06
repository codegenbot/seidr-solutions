#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<std::vector<int>> arr, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        auto it = max_element(arr.begin(), arr.end(), [](const auto& a, const auto& b) { return a[0] < b[0]; });
        result.push_back((*it)[0]);
        arr.erase(it);
    }
    return result;
}