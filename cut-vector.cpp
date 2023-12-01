#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int n = nums.size();
    int leftSum = 0;
    int rightSum = 0;

    // Calculate the total sum of the vector
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }

    // Iterate through the vector and find the spot where the difference is minimum
    int minDiff = abs(leftSum - rightSum);
    int cutIndex = 0;

    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];

        int diff = abs(leftSum - rightSum);

        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    // Create the two subvectors based on the cutIndex
    vector<int> subvector1;
    vector<int> subvector2;

    for (int i = 0; i <= cutIndex; i++) {
        subvector1.push_back(nums[i]);
    }

    for (int i = cutIndex + 1; i < n; i++) {
        subvector2.push_back(nums[i]);
    }

    return make_pair(subvector1, subvector2);
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