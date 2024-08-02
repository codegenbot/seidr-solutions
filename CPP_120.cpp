#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& arr, int x, int y) {
    return std::count(arr.begin(), arr.end(), x) == std::count(arr.begin(), arr.end(), y);
}

std::vector<int> solve(std::vector<int>& arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    std::vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}