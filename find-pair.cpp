#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numToIndex.count(complement)) {
            return {complement, nums[i]};
        }
        numToIndex[nums[i]] = i;
    }
    return {-1, -1};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto& x : nums) cin >> x;
    int target;
    cin >> target;
    pair<int, int> result = findPair(nums, target);
    cout << result.first << " " << result.second << endl;
    return 0;
}