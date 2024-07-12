#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    return {};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int x;
    cin >> x;
    vector<int> result = findPair(nums, x);
    if (!result.empty()) {
        cout << result[0] << endl << result[1] << endl;
    } else {
        cout << "-1" << endl << "-1" << endl;
    }
    return 0;
}