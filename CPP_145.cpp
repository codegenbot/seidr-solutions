#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    int sum_digits_a = 0, sum_digits_b = 0;
    for (auto num : a) {
        sum_digits_a += abs(num) % 10;
    }
    for (auto num : b) {
        sum_digits_b += abs(num) % 10;
    }
    return sum_digits_a == sum_digits_b;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_digits_a = 0, sum_digits_b = 0;
        int num_a = abs(a), num_b = abs(b);
        while (num_a > 0) {
            sum_digits_a += num_a % 10;
            num_a /= 10;
        }
        while (num_b > 0) {
            sum_digits_b += num_b % 10;
            num_b /= 10;
        }
        if (sum_digits_a == sum_digits_b) {
            return a < b;
        }
        return sum_digits_a < sum_digits_b;
    });
    return nums;
}