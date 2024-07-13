#include <vector>

int basement(std::vector<int>& nums) {
    int sum = 0;
    int minIndex = -1; 

    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0)
            minIndex = i; 
    }
    return (minIndex != -1) ? minIndex + 1 : -1;
}

int main() {
    std::vector<int> nums = {11, 10, 66, 2, 46, -69, -93, 48, -56, -15, -67, -97};
    int result = basement(nums);
    return 0;
}