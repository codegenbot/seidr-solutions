#include <vector>
#include <numeric>
#include <algorithm>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b);

vector<int> order_by_points(const vector<int>& nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int temp_a = abs(a), temp_b = abs(b);
        while (temp_a) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }
        while (temp_b) {
            sum_b += temp_b % 10;
            temp_b /= 10;
        }
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return nums;
}

int main() {
    vector<int> nums = {123, 56, 789, 33};
    nums = order_by_points(nums);
    assert(nums == vector<int>({33, 123, 56, 789}));
    return 0;
}