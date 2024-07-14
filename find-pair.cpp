```c++
#include <vector>
#include <utility>
#include <algorithm>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size() - 1; i++) {
        int complement = target - nums[i];
        
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] == complement) {
                return {nums[i], nums[j]};
            }
            else if (nums[j] > complement) {
                break;
            }
        }
    };
    
    return {-1, -1};
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6};
    int target = 7;
    std::pair<int, int> result = findPair(nums, target);
    if (result.first != -1) {
        std::cout << "The pair of numbers that sum to the target is: (" << result.first << ", " << result.second << ")" << std::endl;
    } else {
        std::cout << "No such pair found." << std::endl;
    }
    return 0;
}