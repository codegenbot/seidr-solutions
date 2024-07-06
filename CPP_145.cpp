#include <algorithm>
#include <vector>
#include <string>

bool compare(int a, int b) {
    if (!issame({a}, {b})) return (a > b) - (a < b);
    int sumA = 0, sumB = 0;
    for (char c : to_string(a)) sumA += c - '0';
    for (char c : to_string(b)) sumB += c - '0';
    return sumA - sumB > 0;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compare);
    return nums;
}