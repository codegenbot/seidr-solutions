#include <vector>
#include <algorithm>
#include <iostream>

std::vector<std::pair<int, int>> findPairs(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    
    std::vector<std::pair<int, int>> result;
    
    for (int i = 0; i < nums.size(); ++i) {
        int j = nums.size() - 1;
        while (j > i) {
            if ((nums[i] + nums[j]) == target) {
                result.push_back({nums[i], nums[j]});
                --j;
                while (j > i && nums[j] == nums[j-1]) {
                    --j;
                }
                break;
            } else if ((nums[i] + nums[j]) < target) {
                --j;
                while (j > i && nums[j] == nums[j-1]) {
                    --j;
                }
            } else {
                ++i;
                while (i < j && nums[i] == nums[i+1]) {
                    ++i;
                }
            }
        }
    }
    
    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7; 
    std::vector<std::pair<int, int>> result = findPairs(nums, target);
    for (const auto& pair : result) {
        std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
    }
    return 0;
}