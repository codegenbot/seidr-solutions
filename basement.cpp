#include <iostream>
#include <vector>

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
    while (!(std::cin >> n)) {
        std::cout << "Invalid input. Please enter an integer." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        while (!(std::cin >> nums[i])) {
            std::cout << "Invalid input. Please enter an integer." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    std::cout << basement(nums) << std::endl;
    return 0;
}