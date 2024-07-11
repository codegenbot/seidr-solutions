#include <vector>
#include <iostream>

std::pair<int, int> findPair(std::vector<int> nums, int target) {
    std::pair<int, int> result;
    std::unordered_map<int, int> map;
    
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            result.first = complement;
            result.second = nums[i];
            break;
        }
        map[nums[i]] = i;
    }
    
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int target;
    std::cin >> target;
    
    std::pair<int, int> result = findPair(nums, target);
    std::cout << result.first << std::endl;
    std::cout << result.second << std::endl;
    
    return 0;
}