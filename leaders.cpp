#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int maxRight = nums.back();
    leaders.push_back(maxRight);

    for (int i = nums.size() - 2; i >= 0; --i) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }

    return leaders;
}

int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num && num != -1) {
        nums.push_back(num);
    }
    
    std::vector<int> result = findLeaders(nums);
    for (int leader : result) {
        std::cout << leader << " ";
    }

    return 0;
}