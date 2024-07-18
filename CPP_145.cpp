#include <algorithm>
#include <vector>
#include <iostream>
#include <cassert> 

int sumOfDigits(int num) {
    int sum = 0;
    int temp = abs(num);
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}

bool issame(int a, int b) {
    return sumOfDigits(a) == sumOfDigits(b);
}

bool order_by_points(int a, int b) {
    int sum_a = sumOfDigits(a);
    int sum_b = sumOfDigits(b);
    if (sum_a == sum_b) {
        return a < b;
    }
    return sum_a < sum_b;
}

int main() {
    std::vector<int> nums = {3, 45, 12, 6, 21}; // example input
    std::sort(nums.begin(), nums.end(), order_by_points);

    for (int num : nums) {
        std::cout << num << " ";
    }
    return 0;
}