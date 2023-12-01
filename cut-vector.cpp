#include <vector>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int target = sum / 2;
    int currSum = 0;
    int diff = INT_MAX;
    int idx = 0;
    
    for (int i = 0; i < n; i++) {
        currSum += nums[i];
        int currDiff = abs(currSum - target);
        if (currDiff < diff) {
            diff = currDiff;
            idx = i;
        }
    }
    
    vector<int> subVector1(nums.begin(), nums.begin() + idx + 1);
    vector<int> subVector2(nums.begin() + idx + 1, nums.end());
    
    return make_pair(subVector1, subVector2);
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