#include <vector>

std::vector<int> maximum(const std::vector<int>& nums, int n) {
    if (nums.empty()) {
        return {};
    }
    std::vector<int> result(nums.begin(), nums.begin() + std::min(n, static_cast<int>(nums.size())));
    std::sort(result.begin(), result.end(), std::greater<int>());
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

bool solveProblem() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return true;
}