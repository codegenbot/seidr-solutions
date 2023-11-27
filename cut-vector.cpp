#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cut_vector(const vector<int>& nums) {
    int n = nums.size();
    vector<int> subvector1, subvector2;
    int leftSum = 0;
    int rightSum = 0;
    
    // Calculate the sum of all numbers in the input vector
    for (int i = 0; i < n; i++) {
        rightSum += nums[i];
    }
    
    // Iterate through the vector and find the split point
    for (int i = 0; i < n; i++) {
        leftSum += nums[i];
        rightSum -= nums[i];
        
        // If the sums on both sides are equal or the difference is smallest so far, update the subvectors
        if (leftSum == rightSum || abs(leftSum - rightSum) < abs(subvector1.size() - subvector2.size())) {
            subvector1.assign(nums.begin(), nums.begin() + i + 1);
            subvector2.assign(nums.begin() + i + 1, nums.end());
        }
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
    
    pair<vector<int>, vector<int>> result = cut_vector(nums);
    vector<int> subvector1 = result.first;
    vector<int> subvector2 = result.second;
    
    for (int num : subvector1) {
        cout << num << endl;
    }
    for (int num : subvector2) {
        cout << num << endl;
    }
    
    return 0;
}