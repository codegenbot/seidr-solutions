#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    unordered_set<int> numSet;

    for (int num : nums) {
        int complement = target - num;
        if (numSet.count(complement)) {
            result.push_back(complement);
            result.push_back(num);
            break;
        }
        numSet.insert(num);
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

    int target;
    cin >> target;

    vector<int> result = findPair(nums, target);

    for (int num : result) {
        cout << num << endl;
    }

    return 0;
}