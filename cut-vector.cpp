#include <iostream>
#include <vector>

std::vector<int> cutVector(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    int target = sum / 2;
    
    int prefixSum = 0;
    int closestSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        prefixSum += nums[i];
        if (abs(target - prefixSum) < abs(target - closestSum)) {
            closestSum = prefixSum;
        }
    }
    
    std::vector<int> subVector1;
    std::vector<int> subVector2;
    
    int index = 0;
    while (index < nums.size() && prefixSum > closestSum) {
        subVector1.push_back(nums[index]);
        prefixSum -= nums[index];
        index++;
    }
    
    while (index < nums.size()) {
        subVector2.push_back(nums[index]);
        index++;
    }
    
    if (subVector1.size() < subVector2.size()) {
        subVector1.push_back(0);
    } else {
        subVector2.push_back(0);
    }
    
    return {subVector1, subVector2};
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    std::vector<int> result1 = cutVector(nums)[0];
    std::vector<int> result2 = cutVector(nums)[1];
    
    for (int num : result1) {
        std::cout << num << std::endl;
    }
    for (int num : result2) {
        std::cout << num << std::endl;
    }
    
    return 0;
}