```cpp
#include <algorithm>
#include <vector>

bool issame(std::vector<int> a,std::vector<int>b){
    int sumA = 0, sumB = 0;
    for (int x : a) sumA += x;
    for (int x : b) sumB += x;
    return sumA == sumB;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    auto compare = [&nums](int a, int b) {
        if (!issame({a}, {b})) {
            int sumA = 0, sumB = 0;
            for (char c : std::to_string(a)) sumA += c - '0';
            for (char c : std::to_string(b)) sumB += c - '0';
            return sumA - sumB > 0 ? 1 : -1;
        } else {
            return nums.size() - std::distance(nums.begin(), std::find(nums.begin(), nums.end(), a)) -
                   std::distance(nums.begin(), std::find(nums.begin(), nums.end(), b));
        }
    };
    std::sort(nums.begin(), nums.end(), compare);
    return nums;
}