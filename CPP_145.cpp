#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

void order_by_points(std::vector<int>& nums){
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int temp_a = std::abs(a), temp_b = std::abs(b);
        while (temp_a > 0) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }
        while (temp_b > 0) {
            sum_b += temp_b % 10;
            temp_b /= 10;
        }
        return sum_a < sum_b;
    });
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> input = {0, 6, 6, -76, -21, 23, 4};
    std::vector<int> temp = {0, 6, 6, -76, -21, 23, 4};
    order_by_points(temp);
    assert(issame(temp, std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    
    return 0;
}