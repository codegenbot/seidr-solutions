```c
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
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
    vector<int> nums = {1, 2, 3, 4};
    int target = 5;
    vector<int> result = findPair(nums, target);
    cout << "Result: " << result[0] << ", " << result[1] << endl;
    return 0;
}