#include <iostream>
#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0;
    int rightSum = 0;
    
    // Calculate the sum of all elements
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }
    
    // Iterate through each element and find the spot where the difference is minimized
    int minDiff = abs(leftSum - rightSum);
    int splitIndex = 0;
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    // Create the two resulting subvectors
    vector<int> leftSubvector(nums.begin(), nums.begin() + splitIndex + 1);
    vector<int> rightSubvector(nums.begin() + splitIndex + 1, nums.end());
    
    return leftSubvector;
    return rightSubvector;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    vector<int> leftSubvector, rightSubvector;
    leftSubvector = cutVector(nums);
    rightSubvector = cutVector(nums);
    
    // Print the resulting subvectors
    for (int i = 0; i < leftSubvector.size(); i++) {
        cout << leftSubvector[i] << endl;
    }
    for (int i = 0; i < rightSubvector.size(); i++) {
        cout << rightSubvector[i] << endl;
    }
    
    return 0;
}