#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    pair<int, int> result = make_pair(-1, -1);

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            result.first = min(result.first, complement);
            result.second = max(result.second, nums[i]);
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
    cout << findPair(nums, 0).first << endl;
    cout << findPair(nums, 0).second << endl;
    return 0;
}