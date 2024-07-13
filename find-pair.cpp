#include <vector>
#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;

vector<pair<int, int>> findPair(vector<int>& nums, int target) {
    map<int, int> numMap;
    vector<pair<int, int>> result;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            result.push_back({complement, nums[i]});
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
    vector<pair<int, int>> result = findPair(nums, target);
    for (auto& pair : result) {
        cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}