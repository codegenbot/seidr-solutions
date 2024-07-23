#include <vector>

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i + 1; 
        else if (sum == 0) 
            sum = 0;
    }
    return -1;
}

int main() {
    std::vector<int> nums = {-2, 3, 5, -4, -6};
    int result = basement(nums);
    return 0;
}