#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<int> result = nums;
    sort(result.begin(), result.end(), [&nums](int a, int b) {
        int sumA = 0, sumB = 0;
        for (char c : to_string(a)) sumA += c - '0';
        for (char c : to_string(b)) sumB += c - '0';
        if (sumA != sumB) return sumA < sumB;
        return std::distance(nums.begin(), find(nums.begin(), nums.end(), a)) <
               std::distance(nums.begin(), find(nums.begin(), nums.end(), b));
    });
    return result;
}