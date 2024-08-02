#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = -1;

    for (int i = 0; i < nums.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; j++) {
            leftSum += nums[j];
        }
        for (int j = i + 1; j < nums.size(); j++) {
            rightSum += nums[j];
        }
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    vector<vector<int>> result(2);
    result[0] = vector<int>(nums.begin(), nums.begin() + splitIndex);
    result[1] = vector<int>(nums.begin() + splitIndex, nums.end());
    return result;
}

int main() {
    int numCases;
    cin >> numCases;

    for (int caseNum = 0; caseNum < numCases; caseNum++) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        vector<vector<int>> result = cutVector(nums);

        cout << "[";
        for (int i = 0; i < result[0].size(); i++) {
            cout << result[0][i] << " ";
        }
        cout << "]" << endl;
        cout << "[";
        for (int i = 0; i < result[1].size(); i++) {
            cout << result[1][i] << " ";
        }
        cout << "0]" << endl;
    }

    return 0;
}