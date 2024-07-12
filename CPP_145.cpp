#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

using namespace std;

vector<int> order_by_points(const vector<int>& nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        auto sumDigits = [](int num) {
            return accumulate(to_string(abs(num)).begin(), to_string(abs(num)).end(), 0,
                               [](int sum, char c) {
                                   return sum + (c - '0');
                               });
        };
        int sumA = sumDigits(a);
        int sumB = sumDigits(b);
        if (sumA == sumB) {
            return a < b;
        } else {
            return sumA < sumB;
        }
    });
    return nums;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}