#include <algorithm>
#include <vector>

std::vector<int> order_by_points(const std::vector<int>& nums) {
    auto comp = [&nums](int a, int b) {
        int sumA = 0, sumB = 0;
        for (char c : to_string(a)) sumA += c - '0';
        for (char c : to_string(b)) sumB += c - '0';
        if (sumA != sumB) return sumA < sumB;
        return std::distance(nums.begin(), std::find(nums.begin(), nums.end(), a)) <
               std::distance(nums.begin(), std::find(nums.begin(), nums.end(), b));
    };
    std::vector<int> result = nums;
    std::sort(result.begin(), result.end(), comp);
    return result;
}