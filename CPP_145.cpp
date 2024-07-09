#include <algorithm>
#include <vector>

bool order_by_points(int a, int b) {
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
}

int main() {
    std::vector<int> nums = {0, 6, 6, -76, -21, 23, 4};
    std::sort(nums.begin(), nums.end(), order_by_points);
    return nums;
}