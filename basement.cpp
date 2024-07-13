#include <vector>

int basement(std::vector<int>& nums) {
    int i = 0;
    auto sum = 0;
    for (int j = 0; j < nums.size(); ++j) {
        sum += nums[j];
        if (sum < 0) 
            return j + 1;
    }
    return -1;
}

int main() {
    std::vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = basement(nums);
    std::cout << "The basement index is: " << result << std::endl;
    return 0;
}