#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int n) {
    std::vector<int> result;
    for (int i = 0; i < n; i++) {
        if(i >= arr.size()) break;
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}