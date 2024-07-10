#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> order_by_points(const vector<int>& nums) {
    sort(nums.begin(), nums.end(), [a, b](int a, int b){
        int sum_a = accumulate(to_string(abs(a)).begin(), to_string(abs(a)).end(), 0, [](int sum, char c) { return sum + (c - '0'); });
        int sum_b = accumulate(to_string(abs(b)).begin(), to_string(abs(b)).end(), 0, [](int sum, char c) { return sum + (c - '0'); });
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return nums;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
}