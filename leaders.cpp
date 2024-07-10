#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int max_right = nums[n - 1];
    leaders.push_back(max_right);
    
    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] >= max_right) {
            leaders.push_back(nums[i]);
            max_right = nums[i];
        }
    }
    
    std::reverse(leaders.begin(), leaders.end());
    
    return leaders;
}

int main() {
    int num_count;
    std::vector<int> nums;

    std::cin >> num_count;

    for (int i = 0; i < num_count; ++i) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    std::vector<int> result = findLeaders(nums);

    for (int leader : result) {
        std::cout << leader << " ";
    }

    return 0;
}