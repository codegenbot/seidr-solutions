#include <vector>
#include <algorithm>

bool issame(int x, int y) {
    return x == y;
}

std::vector<int> maximum(std::vector<int> arr, int n) {
    std::vector<int> result;
    for (int i = 0; i < n && i < arr.size(); i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}