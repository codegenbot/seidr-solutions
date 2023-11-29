#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    
    vector<int> partialSums(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        partialSums[i] = partialSums[i - 1] + nums[i - 1];
    }
    
    int minDiff = INT_MAX;
    int cutSpot = 0;
    for (int i = 1; i <= n; i++) {
        int leftSum = partialSums[i - 1];
        int rightSum = partialSums[n] - partialSums[i - 1];
        int diff = abs(rightSum - leftSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutSpot = i;
        }
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + cutSpot);
    vector<int> subvector2(nums.begin() + cutSpot, nums.end());
    
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
        cout << num << " ";
    }
    cout << endl;
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}