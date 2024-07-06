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
        return distance(nums.begin(), find(nums.begin(), nums.end(), a)) -
               distance(nums.begin(), find(nums.begin(), nums.end(), b));
    };
    sort(nums.begin(), nums.end(), compare);
    return nums;
}

int test(){
    std::vector<int> result = order_by_points({0,6,6,-76,-21,23,4});
    assert (std::equal(result.begin(), result.end(),{-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}