#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            return make_pair(complement, nums[i]);
        }
        numIndex[nums[i]] = i;
    }
    return make_pair(-1, -1);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int& x : nums) {
        cin >> x;
    }
    int target;
    cin >> target;

    pair<int, int> res = findPair(nums, target);

    if (res.first == -1 && res.second == -1) {
        cout << "No such pair exists" << endl;
    } else {
        cout << res.first << '\n' << res.second << endl;
    }

    return 0;
}