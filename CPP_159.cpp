#include <algorithm>
#include <cassert>
#include <vector>

std::pair<int, int> eat(const std::vector<int>& nums) {
    int need = nums[0];
    int remaining = nums[1];
    int total = nums[2] + need;
    int eaten = std::min(total, remaining);
    int left = std::max(0, total - remaining);
    return {eaten, left};
}

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return (a.first == b.first) && (a.second == b.second);
}