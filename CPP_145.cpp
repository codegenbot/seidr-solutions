#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int num1, int num2) {
        auto sum = [](int num) {
            return accumulate(to_string(abs(num)).begin(), to_string(abs(num)).end(),
                                    0, [](int a, char b) { return a + (b - '0'); });
        };
        return sum(num1) == sum(num2) ? num1 < num2 : sum(num1) < sum(num2);
    });
    return nums;
}

int main() {
    assert(order_by_points({0, 6, 6, -76, -21, 23, 4}) == vector<int>{-76, -21, 0, 4, 23, 6, 6});
   
    return 0;
}