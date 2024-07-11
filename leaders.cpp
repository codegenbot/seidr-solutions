#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int num;
    
    std::cout << "Enter positive integers (0 to end input):" << std::endl;
    while (std::cin >> num && num != 0) {
        nums.push_back(num);
    }
    
    std::vector<int> leaders;
    int max_right = INT_MIN;
    
    for (int i = nums.size()-1; i >= 0; i--) {
        if (nums[i] >= max_right) {
            leaders.push_back(nums[i]);
            max_right = nums[i];
        }
    }
    
    for (int j = leaders.size()-1; j >= 0; j--) {
        std::cout << leaders[j] << " ";
    }
    
    return 0;
}