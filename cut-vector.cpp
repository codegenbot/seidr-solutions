#include <iostream>
#include <vector>
using namespace std;

vector<int> cutVector(vector<int> nums) {
    int n = nums.size();
    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }

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

    vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> rightSubvector(nums.begin() + cutIndex + 1, nums.end());
    leftSubvector.push_back(0);
    return leftSubvector;
    rightSubvector.push_back(0);
    return rightSubvector;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> leftSubvector, rightSubvector;
    leftSubvector = cutVector(nums);
    rightSubvector = cutVector(nums);

    for (int i = 0; i < leftSubvector.size(); i++) {
        cout << leftSubvector[i] << endl;
    }
    for (int i = 0; i < rightSubvector.size(); i++) {
        cout << rightSubvector[i] << endl;
    }

    return 0;
}