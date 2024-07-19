#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b){
        int sum_a = 0, sum_b = 0;
        a = abs(a);
        b = abs(b);
        while (a > 0) { sum_a += a % 10; a /= 10; }
        while (b > 0) { sum_b += b % 10; b /= 10; }
        if (sum_a == sum_b) return abs(a) < abs(b);
        return sum_a < sum_b;
    });
    return nums;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}