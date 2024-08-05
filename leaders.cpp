#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n - 1];
    leaders.push_back(maxRight);
    
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }
    
    std::reverse(leaders.begin(), leaders.end());
    
    return leaders;
}

int main() {
    std::vector<int> nums;
    int num, size;
    std::cout << "Enter the size of the vector: ";
    std::cin >> size;
    
    std::cout << "Enter the elements of the vector: ";
    for (int i = 0; i < size; i++) {
        std::cin >> num;
        nums.push_back(num);
    }
    
    std::vector<int> result = findLeaders(nums);
    
    std::cout << "The leaders are: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    
    std::cout << std::endl;
    return 0;
}