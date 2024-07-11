#include <algorithm>
#include <cassert>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

bool order_by_points(const std::vector<int>& a, const std::vector<int>& b) {
    int sum_a = 0, sum_b = 0;
    for (auto num : a) {
        int temp_a = abs(num);
        while (temp_a) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }
    }
    for (auto num : b) {
        int temp_b = abs(num);
        while (temp_b) {
            sum_b += temp_b % 10;
            temp_b /= 10;
        }
    }
    if (sum_a == sum_b) {
        return issame(a, b);
    }
    return sum_a < sum_b;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
    
    return 0;
}