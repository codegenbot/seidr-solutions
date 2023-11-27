#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int cutIndex = -1;

    for (int i = 1; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    vector<int> left(nums.begin(), nums.begin() + cutIndex);
    vector<int> right(nums.begin() + cutIndex, nums.end());
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
    vector<int> left = result.first;
    vector<int> right = result.second;

    for (int i = 0; i < left.size(); i++) {
        cout << left[i] << endl;
    }
    for (int i = 0; i < right.size(); i++) {
        cout << right[i] << endl;
    }

    return 0;
}