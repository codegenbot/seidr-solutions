#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

int sum_of_digits(int num) {
    int sum = 0;
    num = abs(num);
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = sum_of_digits(a);
        int sum_b = sum_of_digits(b);
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return nums;
}

int main() {
    std::vector<int> nums = {1, 11, -1, -11, -12};
    std::vector<int> sorted_nums = order_by_points(nums);
    for (int num : sorted_nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    nums = {};
    sorted_nums = order_by_points(nums);
    for (int num : sorted_nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}