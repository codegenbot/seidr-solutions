#include <vector>
#include <algorithm>

std::vector<std::pair<int, int>> findPairs(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    
    std::vector<std::pair<int, int>> result;
    
    int i = 0;
    int j = nums.size() - 1;
    
    while (i < j) {
        int sum = nums[i] + nums[j];
        
        if (sum == target) {
            while (i + 1 < j && nums[i] == nums[i + 1]) { i++; }
            while (j - 1 > i && nums[j] == nums[j - 1]) { j--; }
            result.push_back({nums[i], nums[j]});
        } else if (sum < target) {
            i++;
        } else {
            j--;
        }
    }
    
    return result;
}

int main() {
    std::vector<int> nums = {8, -7846, 5139, 6300, 281, -842, -9075, -7785, 6034, 5420};
    int target = 6300;
    std::vector<std::pair<int, int>> result = findPairs(nums, target);
    return 0;
}