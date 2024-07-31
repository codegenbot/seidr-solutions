#include <vector>
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    std::cout << specialFilter(nums) << std::endl;
}

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && abs(num) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}