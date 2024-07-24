Here is the completed code:

#include <vector>
#include <iostream>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int num : nums) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            return {complement, num};
        }
        numMap[num] = 1;
    }
    return {};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
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