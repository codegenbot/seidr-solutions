#include <algorithm>
#include <vector>
#include <string>

int main() {
    std::vector<int> nums = {0,6,6,-76,-21,23,4};
    std::vector<int> res = order_by_points(nums);
    assert(std::equal(res.begin(), res.end(), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    auto compare = [&](int a, int b) {
        if (a == b) return 0;
        long sumA = 0, sumB = 0;
        for (char c : std::to_string(a)) sumA += c - '0';
        for (char c : std::to_string(b)) sumB += c - '0';
        if (sumA != sumB) return sumA - sumB > 0 ? 1 : -1;
        return distance(nums.begin(), find(nums.begin(), nums.end(), a)) -
               distance(nums.begin(), find(nums.begin(), nums.end(), b));
    };
    std::vector<int> res = nums;
    sort(res.begin(), res.end(), compare);
    return res;
}