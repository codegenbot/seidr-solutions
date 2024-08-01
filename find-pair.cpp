#include <vector>
using namespace std;

pair<int, int> findPair(const vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numToIndex.find(complement) != numToIndex.end()) {
            return {complement, nums[i]};
        }
        numToIndex[nums[i]] = i;
    }
    return {{-1, -1}}; // return default pair
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    cout << findPair(arr, m).first << " " << findPair(arr, m).second << endl;
    return 0;
}