#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    return {-1, -1}; 
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto& num : nums) {
        cin >> num;
    }
    int target;
    cin >> target;
    pair<int, int> result = findPair(nums, target);
    cout << result.first << '\n' << result.second << '\n';
    return 0;