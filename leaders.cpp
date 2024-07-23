#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n-1];
    leaders.push_back(maxRight);
    for (int i = n-2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }
    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    // Read input
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }

    // Call the function and output the result
    std::vector<int> result = findLeaders(nums);
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}