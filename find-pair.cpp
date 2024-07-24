#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numToIndex.count(complement)) {
            return {complement, nums[i]};
        }
        numToIndex[nums[i]] = i;
    }
    throw runtime_error("No pair found");
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int& num : nums) {
        cin >> num;
    }
    int target;
    cin >> target;
    try {
        pair<int, int> result = findPair(nums, target);
        cout << result.first << "\n" << result.second << "\n";
    } catch (const runtime_error& e) {
        cout << "No pair found\n";
    }
    return 0;
}