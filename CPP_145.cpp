#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
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

int main() {
    std::vector<int> nums = {123, 4352, 67, 56, 7890};
    std::sort(nums.begin(), nums.end(), issame);
    for (int num : nums) {
        std::cout << num << " ";
    }
    return 0;
}