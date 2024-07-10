#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            pairs.push_back({complement, nums[i]});
        }
        numMap[nums[i]] = i;
    }
    std::sort(pairs.begin(), pairs.end());
    return pairs[0];
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
    cout << result.first << " " << result.second << endl;
    return 0;
}