#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int target = sum / 2;
    int prefixSum = 0;
    int idx = -1;
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        if (prefixSum >= target) {
            idx = i;
            break;
        }
    }
    
    std::vector<int> subVec1(nums.begin(), nums.begin() + idx + 1);
    std::vector<int> subVec2(nums.begin() + idx + 1, nums.end());
    
    for (int num : subVec1) {
        std::cout << num << std::endl;
    }
    for (int num : subVec2) {
        std::cout << num << std::endl;
    }
    
    return 0;
}