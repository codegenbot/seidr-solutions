#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numToIndex.count(complement)) {
            return make_pair(nums[numToIndex[complement]], nums[i]);
        }
        numToIndex[nums[i]] = i;
    }
    
    throw runtime_error("No pair found");
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
    cout << findPair(arr, target).first << " " << findPair(arr, target).second << endl;
    return 0;
}