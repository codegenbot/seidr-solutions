#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    vector<pair<int, int>> sortedNums;
    for (int i = 0; i < nums.size(); ++i) {
        sortedNums.push_back({nums[i], i});
    }
    sort(sortedNums.begin(), sortedNums.end());

    int left = 0;
    int right = sortedNums.size() - 1;
    while (left < right) {
        int sum = sortedNums[left].first + sortedNums[right].first;
        if (sum == target) {
            return make_pair(sortedNums[left].second, sortedNums[right].second);
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return make_pair(-1, -1);
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    pair<int, int> result = findPair(nums, target);

    if (result.first != -1 && result.second != -1) {
        cout << nums[result.first] << endl;
        cout << nums[result.second] << endl;
    } else {
        cout << "Pair not found." << endl;
    }

    return 0;
}