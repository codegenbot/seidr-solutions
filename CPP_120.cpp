#include <algorithm>
#include <functional>
#include <vector>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    return std::vector<int>(arr.begin(), arr.begin() + k);
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));