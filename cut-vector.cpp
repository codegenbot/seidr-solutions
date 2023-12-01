#include <iostream>
#include <vector>
using namespace std;

vector<int> cut_vector(vector<int> nums) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    int leftSum = 0;
    int rightSum = sum;
    int diff = abs(leftSum - rightSum);
    int index = 0;
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        int newDiff = abs(leftSum - rightSum);
        if (newDiff < diff) {
            diff = newDiff;
            index = i;
        }
    }
    vector<int> leftSubvector(nums.begin(), nums.begin() + index + 1);
    vector<int> rightSubvector(nums.begin() + index + 1, nums.end());
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
    vector<int> leftSubvector;
    vector<int> rightSubvector;
    leftSubvector = cut_vector(nums);
    rightSubvector = cut_vector(nums);
    for (int i = 0; i < leftSubvector.size(); i++) {
        cout << leftSubvector[i] << endl;
    }
    for (int i = 0; i < rightSubvector.size(); i++) {
        cout << rightSubvector[i] << endl;
    }
    return 0;
}