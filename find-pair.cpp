#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numToIndex.find(complement) != numToIndex.end()) {
            return {complement, nums[i]};
        }
        numToIndex[nums[i]] = i;
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
    int target;
    cin >> target;
    vector<int> result = findPair(nums, target);
    if (!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }
    return 0;
}