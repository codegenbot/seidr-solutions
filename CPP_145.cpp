#include <algorithm>
#include <vector>
#include <string>

bool isSame(vector<int> a,vector<int>b){
    int sumA = 0, sumB = 0;
    for (char c : to_string(a[0])) sumA += c - '0';
    for (char c : to_string(b[0])) sumB += c - '0';
    return sumA == sumB && a.size() == b.size();
}

vector<int> order_by_points(vector<int> nums) {
    auto compare = [&](int a, int b) {
        if (!isSame({a},{b})) {
            int sumA = 0, sumB = 0;
            for (char c : to_string(a)) sumA += c - '0';
            for (char c : to_string(b)) sumB += c - '0';
            return sumA - sumB > 0 ? 1 : -1;
        } else {
            return distance(nums.begin(), find(nums.begin(), nums.end(), a)) -
                   distance(nums.begin(), find(nums.begin(), nums.end(), b));
        }
    };
    sort(nums.begin(), nums.end(), compare);
    return nums;
}