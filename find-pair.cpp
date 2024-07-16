#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> result;

    for (int num : nums) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            return {complement, num};
        }
        numMap[num] = 1;
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

    if (!result.empty()) {
        cout << result[0] << "\n" << result[1] << "\n";
    } else {
        cout << "No pair found.\n";
    }

    return 0;
}