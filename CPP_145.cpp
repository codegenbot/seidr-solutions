#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(int a, int b){
    int sum_a = 0, sum_b = 0;
    if (a < 0) a *= -1;
    if (b < 0) b *= -1;
    while (a > 0) {
        sum_a += a % 10;
        a /= 10;
    }
    while (b > 0) {
        sum_b += b % 10;
        b /= 10;
    }
    if (sum_a == sum_b) return false;
    return sum_a < sum_b;
}

int main() {
    std::vector<int> nums = {0, 6, 6, -76, -21, 23, 4};
    std::sort(nums.begin(), nums.end(), issame);
    assert((nums == std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    
    return 0;
}