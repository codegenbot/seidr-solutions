#include <iostream>
#include <vector>

using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            return {complement, nums[i]};
        }
        numIndex[nums[i]] = i;
    }
    return {0, 0};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int& num : nums) {
        cin >> num;
    }
    int target;
    cin >> target;
    
    pair<int, int> result = findPair(nums, target);
    
    if (result.first == 0 && result.second == 0) {
        cout << "No two elements sum to the target.\n";
    } else {
        cout << result.first << "\n" << result.second << "\n";
    }
    
    return 0;
}