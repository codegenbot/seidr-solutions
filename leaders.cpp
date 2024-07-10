#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    
    int max_right = nums.back();
    leaders.push_back(max_right); 

    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] >= leaders.back()) {
            leaders.push_back(nums[i]);
        }
    }

    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    std::vector<int> nums = {16, 17, 4, 3, 5, 2};
    std::vector<int> result = findLeaders(nums);

    for (int leader : result) {
        std::cout << leader << " ";
    }
    std::cout << std::endl;

    return 0;
}