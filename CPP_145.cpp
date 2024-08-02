#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

// Define the order_by_points function
std::vector<int> order_by_points(std::vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        if (a < 0) a *= -1;
        if (b < 0) b *= -1;
        while (a) {
            sum_a += a % 10;
            a /= 10;
        }
        while (b) {
            sum_b += b % 10;
            b /= 10;
        }
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return nums;
}

// Define the issame function
bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6});
    
    return 0;
}