#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>

using namespace std;

vector<pair<int, int>> findPairs(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<pair<int, int>> result;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            bool isPairUnique = true;
            
            // Check if the pair is already in the result
            for (auto& existingPair : result) {
                if ((existingPair.first == complement && existingPair.second == nums[i]) ||
                    (existingPair.first == nums[i] && existingPair.second == complement)) {
                    isPairUnique = false;
                    break;
                }
            }
            
            // If the pair is unique, add it to the result
            if (isPairUnique) {
                result.push_back({min(complement, nums[i]), max(complement, nums[i])});
            }
        }
        numMap[nums[i]] = i;
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