#include <iostream>
#include <vector>
#include <climits>

std::vector<int> findLeaders(const std::vector<int>& nums);

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> nums(n);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    std::vector<int> leaders = findLeaders(nums);

    std::cout << "Leaders: ";
    for (int leader : leaders) {
        std::cout << leader << " ";
    }
    std::cout << std::endl;

    return 0;
}

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int maxRight = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; --i) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    std::vector<int> reversedLeaders;
    for (int i = leaders.size() - 1; i >= 0; --i) {
        reversedLeaders.push_back(leaders[i]);
    }
    return reversedLeaders;
}