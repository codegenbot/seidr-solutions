#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<int> a, vector<int> b) {
    int sumA = 0, sumB = 0;
    for (int x : a) sumA += x;
    for (int x : b) sumB += x;
    return sumA == sumB;
}

vector<int> order_by_points(vector<int> nums) {
    auto compare = [&nums](int a, int b) {
        if (!issame({a}, {b})) {
            int sumA = 0, sumB = 0;
            for (char c : to_string(a)) sumA += c - '0';
            for (char c : to_string(b)) sumB += c - '0';
            return sumA - sumB > 0 ? 1 : -1;
        } else {
            return nums.size() - distance(nums.begin(), find(nums.begin(), nums.end(), a)) -
                   distance(nums.begin(), find(nums.begin(), nums.end(), b));
        }
    };
    sort(nums.begin(), nums.end(), compare);
    return nums;
}