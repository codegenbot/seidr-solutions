#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [&nums](int a, int b) {
        if (abs(a) == abs(b)) return a > b;
        return abs(a) < abs(b);
    });
    return nums;
}