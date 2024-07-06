#include <algorithm>
#include <vector>
#include <string>

std::vector<int> order_by_points(std::vector<int> nums) {
    auto compare = [&](int a, int b) {
        if (a == b) return 0;
        long sumA = 0, sumB = 0;
        for (char c : std::to_string(a)) sumA += c - '0';
        for (char c : std::to_string(b)) sumB += c - '0';
        if (sumA != sumB) return sumA - sumB > 0 ? 1 : -1;
        int aIndex = distance(nums.begin(), find(nums.begin(), nums.end(), a));
        int bIndex = distance(nums.begin(), find(nums.begin(), nums.end(), b));
        return aIndex - bIndex;
    };
    std::vector<int> res = nums;
    sort(res.begin(), res.end(), compare);
    return res;
}