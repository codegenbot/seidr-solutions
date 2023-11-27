#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0, rightSum = 0;

    // Calculate the sum of all elements in the vector
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }

    // Iterate through the vector and find the spot where the difference is minimized
    int diff = INT_MAX, cutIndex = -1;
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];

        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    // Create the two resulting subvectors
    vector<int> leftSubvector(nums.begin(), next(nums.begin(), cutIndex + 1));
    vector<int> rightSubvector(next(nums.begin(), cutIndex + 1), nums.end());

    return {leftSubvector, rightSubvector};
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = cutVector(nums);

    for (int num : result[0]) {
        cout << num << endl;
    }

    for (int num : result[1]) {
        cout << num << endl;
    }

    return 0;
}