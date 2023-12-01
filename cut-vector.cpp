#include <iostream>
#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int leftSum = 0;
    int rightSum = 0;
    int diff = INT_MAX;
    int index = 0;

    // Calculate the sum of all elements in the vector
    for (int num : nums) {
        rightSum += num;
    }

    // Iterate through the vector and find the spot where the difference is smallest
    for (int i = 0; i < nums.size(); i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            index = i;
        }
    }

    // Split the vector into two subvectors at the calculated spot
    vector<int> subvector1(nums.begin(), nums.begin() + index + 1);
    vector<int> subvector2(nums.begin() + index + 1, nums.end());

    // Append a 0 to the second subvector to match the expected output format
    subvector2.push_back(0);

    // Return the two resulting subvectors
    return {subvector1, subvector2};
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = cutVector(nums);

    for (int i = 0; i < result[0].size(); i++) {
        cout << result[0][i] << endl;
    }

    for (int i = 0; i < result[1].size(); i++) {
        cout << result[1][i] << endl;
    }

    return 0;
}