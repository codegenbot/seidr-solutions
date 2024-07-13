#include <iostream>
#include <vector>
#include <numeric>
#include <climits>
#include <cmath>
using namespace std;

pair<vector<int>, vector<int>> findCutIndex(vector<int>& nums) {
    int n = nums.size();
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        int rightSum = totalSum - leftSum;
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    vector<int> subvector1(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> subvector2(nums.begin() + cutIndex + 1, nums.end());

    return {subvector1, subvector2};
}

int main() {
    int n;
    cout << "Enter the number of positive integers in the vector: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter positive integers to form a vector: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    auto result = findCutIndex(nums);
    
    cout << "Subvector 1: ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Subvector 2: ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}