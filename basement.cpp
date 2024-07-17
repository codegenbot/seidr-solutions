#include <vector>
#include <iostream>

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> nums = {1, -2, 3, -4}; 
    int result = basement(nums);
    if (result != -1) {
        std::cout << "Basement found at index " << result << std::endl;
    } else {
        std::cout << "No negative sum found." << std::endl;
    }
    return 0;
}