#include <iostream>
#include <vector>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int n = nums.size();
    
    if (n > 0) {
        int maxRight = nums[n-1];
        leaders.push_back(maxRight);

        for (int i = n-2; i >= 0; i--) {
            if (nums[i] >= maxRight) {
                maxRight = nums[i];
                leaders.push_back(maxRight);
            }
        }
    }

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
    for (int i = leaders.size()-1; i >= 0; i--) {
        std::cout << leaders[i] << " ";
    }
    
    return 0;
}