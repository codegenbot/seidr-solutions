#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    return std::vector<int>(arr.begin(), arr.begin() + k);
}

assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));