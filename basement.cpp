#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return 0;
}

int main() {
    int n;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;

    std::vector<int> nums(n);
    std::cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int result = basement(nums);
    std::cout << "The first index where the sum is negative: " << result << std::endl;

    return 0;
}