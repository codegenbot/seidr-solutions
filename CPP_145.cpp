#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b);

bool compare_by_sum(int a, int b) {
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

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compare_by_sum);
    return nums;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
}