#include <vector>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int leftSum = 0;
    int rightSum = 0;
    for (int num : nums) {
        rightSum += num;
    }

    int minDiff = abs(leftSum - rightSum);
    int index = 0;

    for (int i = 0; i < nums.size(); i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            index = i + 1;
        }
    }

    vector<int> leftVec(nums.begin(), nums.begin() + index);
    vector<int> rightVec(nums.begin() + index, nums.end());
    return make_pair(leftVec, rightVec);
}

int main() {
    int count;
    cin >> count;
    vector<int> nums(count);
    for (int i = 0; i < count; i++) {
        cin >> nums[i];
    }

    pair<vector<int>, vector<int>> result = cutVector(nums);

    for (int num : result.first) {
        cout << num << endl;
    }
    for (int num : result.second) {
        cout << num << endl;
    }
    return 0;
}