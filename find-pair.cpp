#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

std::vector<int> findPair(const std::vector<int>& nums, int target) {
    std::vector<int> sortedNums = nums;
    std::sort(sortedNums.begin(), sortedNums.end());
    
    std::unordered_set<int> seen;
    for (int num : sortedNums) {
        int complement = target - num;
        if (seen.count(complement)) {
            return {complement, num};
        }
        seen.insert(num);
    }
    return {};
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
    
    std::vector<int> result = findPair(nums, target);
    for (int num : result) {
        std::cout << num << std::endl;
    }
    
    return 0;
}