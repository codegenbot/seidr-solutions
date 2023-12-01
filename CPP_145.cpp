#include <algorithm>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

bool compare(int a, int b) {
    int sum_a = 0;
    int sum_b = 0;

    // Calculate the sum of digits for a
    int temp_a = abs(a);
    while (temp_a > 0) {
        sum_a += temp_a % 10;
        temp_a /= 10;
    }

    // Calculate the sum of digits for b
    int temp_b = abs(b);
    while (temp_b > 0) {
        sum_b += temp_b % 10;
        temp_b /= 10;
    }

    // If the sums are equal, order based on index
    if (sum_a == sum_b) {
        return a < b;
    }

    // Otherwise, order based on sum of digits
    return sum_a < sum_b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    sort(nums.begin(), nums.end(), compare);
    return nums;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
}