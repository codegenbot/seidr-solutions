#include <vector>
#include <algorithm>

int maximum(const std::vector<int>& arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    return std::vector<int>(arr.begin(), arr.begin() + k);
}