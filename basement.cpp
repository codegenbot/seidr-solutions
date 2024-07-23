#include <vector>
#include <cstddef>

int basement(const std::vector<int>& nums) {
    int sum = 0;
    for (stdsize_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) return i + 1; 
    }
    return -1; 
}

int main() {
    std::vector<int> nums = {-1, -2, -3, 4};
    int result = basement(nums);
    std::cout << "Result: " << result << std::endl;
    return 0;
}