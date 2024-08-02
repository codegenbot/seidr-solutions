#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> order_by_abs_digit_sum(vector<int> nums);

vector<int> order_by_abs_digit_sum(vector<int> nums) {
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
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });

    return nums;
}

int main() {
    vector<int> nums = {123, 456, 789, 321, 654};
    vector<int> ordered_nums = order_by_abs_digit_sum(nums);

    for (int num : ordered_nums) {
        cout << num << " ";
    }

    assert(order_by_abs_digit_sum({0, 6, 6, -76, -21, 23, 4}) == vector<int>{-76, -21, 0, 4, 23, 6, 6});

    return 0;
}