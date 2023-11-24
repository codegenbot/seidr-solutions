#include <iostream>
#include <vector>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxNum = nums[n-1];
  
    leaders.push_back(maxNum);
  
    for (int i = n-2; i >= 0; i--) {
        if (nums[i] >= maxNum) {
            maxNum = nums[i];
            leaders.push_back(maxNum);
        }
    }
  
    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int n;
    std::cin >> n;
  
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
  
    std::vector<int> leaders = findLeaders(nums);
  
    std::cout << leaders.size() << std::endl;
    for (int i = 0; i < leaders.size(); i++) {
        std::cout << leaders[i] << " ";
    }
  
    return 0;
}
