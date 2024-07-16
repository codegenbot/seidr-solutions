```cpp
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
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
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    auto result = findPair(nums, target);
    if (!result.empty()) {
        cout << "The pair is: " << result[0] << ", " << result[1];
    } else {
        cout << "No such pair found";
    }
    return 0;
}