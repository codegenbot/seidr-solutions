#include <vector>

int basement(std::vector<int>& nums) {
    int sum = 0;
    int idx = -1; 
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0 && idx == -1) { 
            idx = i;
        }
    }
    return idx;
}

int main() {
    std::vector<int> nums = {-3,2,-2,4,5};
    int result = basement(nums);
    std::cout << "First index of basement: " << result << std::endl;
    return 0;
}