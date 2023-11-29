#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int halfSum = sum / 2;
    int currSum = 0;
    int i = 0;
    while (i < n && currSum < halfSum) {
        currSum += nums[i];
        i++;
    }
    
    if (currSum == halfSum) {
        return make_pair(vector<int>(nums.begin(), nums.begin() + i), vector<int>(nums.begin() + i, nums.end()));
    } else {
        int diff1 = abs(currSum - halfSum);
        int diff2 = abs(currSum - nums[i-1] - halfSum);
        if (diff1 < diff2) {
            return make_pair(vector<int>(nums.begin(), nums.begin() + i), vector<int>(nums.begin() + i, nums.end()));
        } else {
            return make_pair(vector<int>(nums.begin(), nums.begin() + i - 1), vector<int>(nums.begin() + i - 1, nums.end()));
        }
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