#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findLeaders(std::vector<int> nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int max_right = nums[n - 1];
    leaders.push_back(max_right);
    
    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] > max_right) {
            leaders.push_back(nums[i]);
            max_right = nums[i];
        }
    }
    
    std::reverse(leaders.begin(), leaders.end());
    
    return leaders;
}

int main() {
    std::vector<int> nums;
    int num;
    std::cout << "Enter positive integers (enter a non-positive integer to stop): ";
    while (std::cin >> num && num > 0) {
        nums.push_back(num);
    }
    
    std::vector<int> leaders = findLeaders(nums);
    
    std::cout << "Leaders in the vector are: ";
    for (int leader : leaders) {
        std::cout << leader << " ";
    }
    
    return 0;
}