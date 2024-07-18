#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

bool issame(int a, int b) {
    int sum_a = 0, sum_b = 0;
    int a_temp = abs(a), b_temp = abs(b);
    while (a_temp > 0) {
        sum_a += a_temp % 10;
        a_temp /= 10;
    }
    while (b_temp > 0) {
        sum_b += b_temp % 10;
        b_temp /= 10;
    }
    return sum_a == sum_b;
}

bool order_by_points(int a, int b) {
    int sum_a = 0, sum_b = 0;
    int a_temp = abs(a), b_temp = abs(b);
    while (a_temp > 0) {
        sum_a += a_temp % 10;
        a_temp /= 10;
    }
    while (b_temp > 0) {
        sum_b += b_temp % 10;
        b_temp /= 10;
    }
    if (sum_a == sum_b) {
        return a < b;
    }
    return sum_a < sum_b;
}

int main() {
    std::vector<int> nums = {5, 12, 3, 22, 9};
    std::sort(nums.begin(), nums.end(), order_by_points);
    return 0;
}