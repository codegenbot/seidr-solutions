#include <vector>

std::vector<std::pair<int, int>> findPair(std::vector<int>& nums, int target) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {{nums[i], nums[j]}};
            }
        }
    }
    return {{-1, -1}};
}