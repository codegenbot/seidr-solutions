#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool comparison(int a, int b) {
    int sumA = 0, sumB = 0;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (a > 0) {
        sumA += a % 10;
        a /= 10;
    }
    while (b > 0) {
        sumB += b % 10;
        b /= 10;
    }
    if (sumA == sumB) {
        return a < b;
    }
    return sumA < sumB;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), comparison);
    return nums;
}

int main() {
    vector<int> nums = {123, 456, 789};

    nums = order_by_points(nums);

    for (int num : nums) {
        cout << num << " ";
    }

    assert(is_same(order_by_points({0, 6, 6, -76, -21, 23, 4}), vector<int>{-76, -21, 0, 4, 23, 6, 6});
    
    return 0;
}