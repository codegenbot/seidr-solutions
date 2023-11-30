#include <algorithm>

bool compare(int a, int b) {
    int sumA = 0, sumB = 0;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (a > 0) {
        sumA += a % 10;
        a /= 10;
    }
    while (b > 0) {
        sumB += b % 10;
        b /= 10;
    }
    if (sumA == sumB) {
        return false;
    } else {
        return sumA < sumB;
    }
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compare);
    return nums;
}