#include <algorithm>
#include <vector>

std::vector<int> order_by_points(std::vector<int> nums) {
    auto compare = [&](int a, int b) {
        if (a == b) return 0;
        long sumA = 0, sumB = 0;
        for (char c : std::to_string(a)) sumA += c - '0';
        for (char c : std::to_string(b)) sumB += c - '0';
        if (sumA != sumB) return sumA - sumB > 0 ? 1 : -1;
        int idxA = distance(nums.begin(), find(nums.begin(), nums.end(), a));
        int idxB = distance(nums.begin(), find(nums.begin(), nums.end(), b));
        return idxA - idxB;
    };
    std::vector<int> res = nums;
    sort(res.begin(), res.end(), compare);
    return res;
}