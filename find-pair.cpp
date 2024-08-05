#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& arr, int target) {
    map<int, int> mp;
    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (mp.find(complement) != mp.end()) {
            return {complement, arr[i]};
        }
        mp[arr[i]] = i;
    }
    return {};
}

int main() {
    int n, x1, y1, z;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> z;

    pair<int, int> result = findPair(nums, z);

    if (!result.first) {
        cout << "No solution exists";
    } else {
        cout << result.first << "\n" << result.second;
    }

    return 0;
}