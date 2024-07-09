#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < k; i++) {
        result.push_back(arr.back());
        arr.pop_back();
    }
    if (!issame(arr, std::vector<int>(k, 0))) {
        return {};
    }
    return result;
}