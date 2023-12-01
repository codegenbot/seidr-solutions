#include <vector>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int target = sum / 2;
    int currSum = 0;
    
    int i = 0;
    while (currSum < target) {
        currSum += nums[i];
        i++;
    }
    
    int diff1 = currSum - target;
    int diff2 = target - (currSum - nums[i-1]);
    
    if (diff1 <= diff2) {
        return make_pair(vector<int>(nums.begin(), nums.begin() + i), vector<int>(nums.begin() + i, nums.end()));
    } else {
        return make_pair(vector<int>(nums.begin(), nums.begin() + i - 1), vector<int>(nums.begin() + i - 1, nums.end()));
    }
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