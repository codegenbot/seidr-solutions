#include <algorithm>

bool compare(int a, int b) {
    int sumA = 0, sumB = 0;
    if (a < 0) a *= -1;
    if (b < 0) b *= -1;
    while (a > 0) {
        sumA += a % 10;
        a /= 10;
    }
    while (b > 0) {
        sumB += b % 10;
        b /= 10;
    }
    if (sumA == sumB) return false;
    return sumA < sumB;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compare);
    return nums;
}