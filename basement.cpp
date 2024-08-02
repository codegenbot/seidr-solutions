#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    if (nums.empty()) return -1;
    
    int sum = 0;
    std::size_t i;
    for (i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    std::vector<int> nums;
    int num;
    
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    std::cout << basement(nums) << std::endl;
    
    return 0;
}