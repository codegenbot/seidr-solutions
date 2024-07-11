#include <algorithm>
#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

bool order_by_points(const vector<int>& a, const vector<int>& b) {
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