#include <vector>
#include <iostream>
using namespace std;

vector<int> cut_vector(vector<int> nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int cutIndex = -1;
    
    // Find the spot where the difference is smallest
    for (int i = 1; i < n; i++) {
        int leftSum = 0;
        int rightSum = 0;
        
        // Calculate sum of elements on left and right side of cut index
        for (int j = 0; j < i; j++) {
            leftSum += nums[j];
        }
        for (int j = i; j < n; j++) {
            rightSum += nums[j];
        }
        
        // Update cut index and difference if current difference is smaller
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }
    
    // Create subvectors based on cut index
    vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex);
    vector<int> rightSubvector(nums.begin() + cutIndex, nums.end());
    
    // Add 0 to the end of right subvector
    rightSubvector.push_back(0);
    
    // Return the two resulting subvectors
    return {leftSubvector, rightSubvector};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<int> result = cut_vector(nums);
    
    for (int i = 0; i < result[0].size(); i++) {
        cout << result[0][i] << endl;
    }
    
    for (int i = 0; i < result[1].size(); i++) {
        cout << result[1][i] << endl;
    }
    
    return 0;
}