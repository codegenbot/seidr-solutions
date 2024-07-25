#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> maximum(const std::vector<int>& nums, int n) {
    if (nums.empty()) {
        return {};
    }
    std::vector<int> result(nums.begin(), nums.begin() + std::min(n, static_cast<int>(nums.size())));
    std::sort(result.begin(), result.end(), std::greater<int>());
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}