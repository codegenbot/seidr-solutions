#include <iostream>
#include <unordered_map>

std::pair<int,int> find_pair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap; 
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return std::make_pair(nums[i], complement);
        }
        numMap[nums[i]] = i;
    }
    throw std::runtime_error("No pair found that sums to the target");
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    try {
        std::pair<int, int> pair = find_pair(nums, target);
        std::cout << "The two elements that sum to the target (" << target << ") are: " << pair.first << ", and " << pair.second << "." << std::endl;
    } catch (std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}