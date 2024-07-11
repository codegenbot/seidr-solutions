#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numToIndex.count(complement)) {
            return make_pair(nums[numToIndex[complement]], nums[i]);
        }
        numToIndex[nums[i]] = i;
    }
    return make_pair(0, 0);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    pair<int, int> result = findPair(nums, target);
    cout << result.first << endl;
    cout << result.second << endl;
    return 0;
}