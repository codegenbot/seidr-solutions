#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr) {
    std::vector<int> result;
    while (!arr.empty()) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}