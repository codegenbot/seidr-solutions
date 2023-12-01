#include <vector>
#include <iostream>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int halfSum = sum / 2;
    std::vector<int> subVector1, subVector2;
    
    int currentSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (currentSum + nums[i] <= halfSum) {
            subVector1.push_back(nums[i]);
            currentSum += nums[i];
        } else {
            subVector2.push_back(nums[i]);
        }
    }
    
    return std::make_pair(subVector1, subVector2);
}

int main() {
    std::vector<int> nums;
    int num;
    
    while (std::cin >> num) {
        nums.push_back(num);
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