#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        a = abs(a);
        b = abs(b);
        while (a > 0) {
            sum_a += a % 10;
            a /= 10;
        }
        while (b > 0) {
            sum_b += b % 10;
            b /= 10;
        }
        if (sum_a == sum_b) {
            return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
        }
        return sum_a < sum_b;
    });
    return nums;
}

int main() {
    assert(order_by_points({0, 6, 6, -76, -21, 23, 4}) == vector<int>{-76, -21, 0, 4, 23, 6, 6});
    return 0;
}