```c++
#include <vector>
#include <iostream>
#include <climits>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int idx = -1;
    
    // Find the index where the difference between the sums of the two subvectors is minimized
    for (int i = 0; i < n; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; j++) {
            sum1 += nums[j];
        }
        for (int j = i; j < n; j++) {
            sum2 += nums[j];
        }
        int currDiff = abs(sum1 - sum2);
        if (currDiff < diff) {
            diff = currDiff;
            idx = i;
        }
    }
    
    // Create the two resulting subvectors
    std::vector<int> sub1(nums.begin(), nums.begin() + idx);
    std::vector<int> sub2(nums.begin() + idx, nums.end());

    return std::make_pair(sub1, sub2);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
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