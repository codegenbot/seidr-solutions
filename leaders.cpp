#include <vector>

std::vector<int> leaders(std::vector<int> nums) {
    std::vector<int> result;
    int max = nums.back();
    result.push_back(max);
    
    for (int i = nums.size() - 2; i >= 0; i--) {
        if (nums[i] >= max) {
            max = nums[i];
            result.push_back(max);
        }
    }
    
    std::reverse(result.begin(), result.end());
    return result;
}