#include <iostream>
#include <vector>

int findNegativeSumIndex(const std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1; // If no negative sum is found
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    int index = findNegativeSumIndex(nums);
    std::cout << index << std::endl;

    return 0;
}