#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n-1];
    leaders.push_back(maxRight);
    for (int i = n-2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    std::vector<int> nums;
    int num;

    while (std::cin >> num) {
        nums.push_back(num);
    }

    if (std::cin.eof()) {
        std::vector<int> output = findLeaders(nums);

        for (int leader : output) {
            std::cout << leader << " ";
        }
    }

    return 0;
}