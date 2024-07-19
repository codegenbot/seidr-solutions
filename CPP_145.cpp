#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int tmp_a = abs(a), tmp_b = abs(b);
        while (tmp_a > 0) {
            sum_a += tmp_a % 10;
            tmp_a /= 10;
        }
        while (tmp_b > 0) {
            sum_b += tmp_b % 10;
            tmp_b /= 10;
        }
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return nums;
}

int main() {
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}