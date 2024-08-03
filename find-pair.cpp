#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    return {};
}

int main() {
    int n;
    std::cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    int target;
    std::cin >> target;
    pair<int, int> result = findPair(nums, target);
    std::cout << result.first << std::endl;
    std::cout << result.second << std::endl;
    return 0;
}