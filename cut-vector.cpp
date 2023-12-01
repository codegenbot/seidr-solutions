#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void cutVector(vector<int>& nums) {
    int n = nums.size();
    int leftSum = 0;
    int rightSum = 0;
    
    // Calculate the sum of all elements in the vector
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }
    
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    // Iterate through each index to find the optimal cut position
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    // Create the two subvectors
    vector<int> subvector1(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> subvector2(nums.begin() + cutIndex + 1, nums.end());
    
    // Print the two subvectors
    for (int i = 0; i < subvector1.size(); i++) {
        cout << subvector1[i] << endl;
    }
    
    for (int i = 0; i < subvector2.size(); i++) {
        cout << subvector2[i] << endl;
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cutVector(nums);
    
    return 0;
}