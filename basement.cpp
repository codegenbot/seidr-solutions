#include <vector>

int basement(std::vector<int>& nums) {
    int sum = 0;
    int i = -1; 
    for (int j = 0; j < nums.size(); ++j) {
        sum += nums[j];
        if (sum < 0 && i == -1) 
            i = j;
    }
    return i + 1;
}

int main() {
    std::vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = basement(nums);
    return 0;
}