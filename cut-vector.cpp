#include <vector>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    int leftSum = 0;
    int rightSum = totalSum;
    int minDiff = abs(leftSum - rightSum);
    int splitIndex = 0;

    for (int i = 0; i < nums.size(); i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    vector<int> left(nums.begin(), nums.begin() + splitIndex + 1);
    vector<int> right(nums.begin() + splitIndex + 1, nums.end());
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
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