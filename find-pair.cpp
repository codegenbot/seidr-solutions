#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>

using namespace std;

vector<pair<int, int>> findPairs(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); i++) {
        numMap[nums[i]] = i;
    }
    
    vector<pair<int, int>> result;
    
    for (auto it = numMap.begin(); it != numMap.end(); ++it) {
        int complement = target - it->first;
        if (numMap.find(complement) != numMap.end() && it->second != numMap[complement]) {
            result.push_back({min(complement, it->first), max(complement, it->first)});
        }
    }
    
    return result;
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
    vector<pair<int, int>> result = findPairs(nums, target);
    
    // Print the results
    for (auto& pair : result) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}