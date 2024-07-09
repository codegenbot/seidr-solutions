#include <iostream>
#include <vector>

int basement(const std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1; // If no negative sum found
}

int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num || !std::cin.eof()) {
        nums.push_back(num);
    }
    std::cout << basement(nums) << std::endl;
    return 0;
}