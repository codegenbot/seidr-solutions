#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        auto getDigitSum = [](int num) {
            int sum = 0;
            num = abs(num);
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            return sum;
        };
        int sumA = getDigitSum(a);
        int sumB = getDigitSum(b);
        if (sumA == sumB) {
            return a < b;
        }
        return sumA < sumB;
    });

    return nums;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}