#include <algorithm>
#include <vector>
#include <string>

int issame(std::vector<int> a, std::vector<int> b){
    int sumA = 0, sumB = 0;
    for (char c : std::to_string(a[0])) sumA += c - '0';
    for (char c : std::to_string(b[0])) sumB += c - '0';
    return sumA == sumB && a.size() == b.size();
}

std::vector<int> order_by_points(std::vector<int> nums) {
    auto compare = [&nums](int a, int b) {
        if (issame({a},{b})) return 0;
        int sumA = 0, sumB = 0;
        for (char c : std::to_string(a)) sumA += c - '0';
        for (char c : std::to_string(b)) sumB += c - '0';
        if (sumA != sumB) return sumA - sumB > 0 ? 1 : -1;
        return nums.size() - std::distance(nums.begin(), std::find(nums.begin(), nums.end(), a)) -
               std::distance(nums.begin(), std::find(nums.begin(), nums.end(), b));
    };
    std::sort(nums.begin(), nums.end(), compare);
    return order_by_points(nums);
}