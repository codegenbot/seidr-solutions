#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            pair<int, int> p = {min(nums[i], complement), max(nums[i], complement)};
            pairs.push_back(p);
        }
        numMap[nums[i]] = i;
    }
    if (!pairs.empty())
        return min_element(pairs.begin(), pairs.end())->first > -1 ? vector<int>(pairs[0].begin(), pairs[0].end()) : vector<int> {-1, -1};
    else
        return vector<int> {-1, -1};
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
    vector<int> result = findPair(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}