#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<std::vector<int>> splitArray(std::vector<int>& arr, int k) {
    std::sort(arr.begin(), arr.end());
    std::vector<std::vector<int>> result;
    for (int i = 0; i < k; ++i) {
        auto it = arr.begin() + i * (arr.size() / k);
        if ((arr.size() % k) > 0 && i == k - 1) {
            result.push_back(std::vector<int>(it, arr.end()));
        } else {
            result.push_back(std::vector<int>(it, it + (arr.size() / k)));
        }
    }
    return result;
}