#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [&] (int a, int b) {
        if (abs(a) != abs(b)) return abs(a) < abs(b);
        else return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
    });
    return nums;
}