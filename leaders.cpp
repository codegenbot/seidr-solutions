#include <vector>
#include <iostream>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    
    int leader = nums.back();
    leaders.push_back(leader); // Rightmost element is always a leader

    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] >= leader) {
            leader = nums[i];
            leaders.push_back(leader);
        }
    }

    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    std::vector<int> nums = {16, 17, 4, 3, 5, 2};
    std::vector<int> result = findLeaders(nums);
    
    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}