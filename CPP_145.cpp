#include <algorithm>
#include <vector>
#include <string>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    auto compare = [&](int a, int b) {
        long sumA = 0, sumB = 0;
        for (char c : std::to_string(a)) sumA += c - '0';
        for (char c : std::to_string(b)) sumB += c - '0';
        if (sumA != sumB) return sumA - sumB > 0 ? 1 : -1;
        return distance(nums.begin(), find(nums.begin(), nums.end(), a)) -
               distance(nums.begin(), find(nums.begin(), nums.end(), b));
    };
    std::vector<int> res = nums;
    sort(res.begin(), res.end(), [&compare](int a, int b) { return compare(a, b) > 0; });
    return res;
}