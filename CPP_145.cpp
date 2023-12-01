#include <algorithm>
#include <vector>
#include <cassert>

bool compare(int a, int b) {
    int sum_a = 0;
    int sum_b = 0;

    int temp_a = std::abs(a);
    while (temp_a > 0) {
        sum_a += temp_a % 10;
        temp_a /= 10;
    }

    int temp_b = std::abs(b);
    while (temp_b > 0) {
        sum_b += temp_b % 10;
        temp_b /= 10;
    }

    if (sum_a == sum_b) {
        return a < b;
    }

    return sum_a < sum_b;
}

using Vector = std::vector<int>;

Vector order_by_points(Vector nums) {
    std::sort(nums.begin(), nums.end(), compare);
    return nums;
}

bool issame(Vector a, Vector b) {
    return a == b;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}