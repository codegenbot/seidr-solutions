#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    pair<int, int> result = {-1, -1};  // Default return value

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            result.first = complement;
            result.second = nums[i];
            return result;
        }
        numIndex[nums[i]] = i;
    }

    return result;  // Return default pair if no pair found
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
    cout << result.first << "\n" << result.second << "\n";
    return 0;
}