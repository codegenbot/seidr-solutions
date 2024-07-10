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
    // Input vector
    std::vector<int> nums;
    int num;
    std::cout << "Enter positive integers for the vector (enter -1 to stop input): ";
    while (std::cin >> num && num != -1) {
        nums.push_back(num);
    }
    
    // Find leaders
    std::vector<int> leaders = findLeaders(nums);
    
    // Output leaders
    for (int leader : leaders) {
        std::cout << leader << " ";
    }
    
    return 0;
}