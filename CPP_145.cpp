#include <algorithm>
#include <cassert>

vector<int> order_by_points(vector<int> nums);

int main() {
    assert(order_by_points({0, 6, 6, -76, -21, 23, 4}) == vector<int>{-76, -21, 0, 4, 23, 6, 6});
    return 0;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int temp_a = abs(a), temp_b = abs(b);
        while (temp_a > 0) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }
        while (temp_b > 0) {
            sum_b += temp_b % 10;
            temp_b /= 10;
        }
        return sum_a == sum_b ? find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b) : sum_a < sum_b;
    });
    return nums;
}