#include <iostream>
#include <vector>
#include <limits>

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    if (!(std::cin >> n) || n <= 0) {
        std::cerr << "Invalid input. Please enter a valid integer." << std::endl;
        return 1;
    }

    std::vector<int> nums(n);

    for (int i = 0; i < n; ++i) {
        if (!(std::cin >> nums[i])) {
            std::cerr << "Invalid input. Please enter valid integers only." << std::endl;
            return 1;
        }
    }

    if (!std::cin.eof()) {
        std::cerr << "Invalid input. Please enter valid integers only." << std::endl;
        return 1;
    }

    std::cout << basement(nums) << std::endl;
    return 0;
}