#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_set<int> seen;
    for (int num : nums) {
        int complement = target - num;
        if (seen.count(complement)) {
            return {complement, num};
        }
        seen.insert(num);
    }
    return {};
}

int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;
    vector<int> result = findPair(nums, target);
    for (int num : result) {
        cout << num << endl;
    }
    return 0;
}