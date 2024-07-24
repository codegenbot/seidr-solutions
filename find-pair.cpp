#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
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
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    
    pair<int, int> result = findPair(arr, target);
    if (!result.empty()) {
        cout << result.first << endl;
        cout << result.second << endl;
    } else {
        cout << "No such pair found" << endl;
    }
    
    return 0;
}