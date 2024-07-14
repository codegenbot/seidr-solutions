#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            return {complement, nums[i]};
        }
        numIndex[nums[i]] = i;
    }
    return {{-1, -1}}; // Return an empty pair if no such pair is found
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto& x : nums) cin >> x;
    int target;
    cin >> target;

    auto result = findPair(nums, target);

    cout << result.first << "\n";
    cout << result.second << "\n";

    return 0;
}