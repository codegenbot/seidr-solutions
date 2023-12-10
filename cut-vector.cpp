```cpp
#include <climits>
#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    size_t n = nums.size();
    size_t diff = SIZE_MAX;
    size_t idx = -1;
    
    for (size_t i = 1; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (size_t j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        
        for (size_t j = i; j < n; j++) {
            rightSum += nums[j];
        }
        
        size_t currDiff = abs(leftSum - rightSum);
        if (currDiff < diff) {
            diff = currDiff;
            idx = i;
        }
    }
    
    std::vector<int> left(nums.begin(), nums.begin() + idx);
    std::vector<int> right(nums.begin() + idx, nums.end());
    
    return std::make_pair(left, right);
}

int main() {
    size_t n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    std::pair<std::vector<int>, std::vector<int>> result = cutVector(nums);
    
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    
    for (int num : result.second) {
        std::cout << num << std::endl;
    }
    
    return 0;
}
```