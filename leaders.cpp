#include <iostream> 
#include <vector>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int max_right = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= max_right) {
            max_right = nums[i];
            leaders.push_back(max_right);
        }
    }
    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    std::vector<int> nums = {16, 17, 4, 3, 5, 2};
    std::vector<int> leaders = findLeaders(nums);
    
    for (int leader : leaders) {
        std::cout << leader << " ";
    }
    std::cout << std::endl;
    
    return 0;
}