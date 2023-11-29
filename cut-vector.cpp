#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    int target = sum / 2;
    int currSum = 0;
    int i = 0;
    while (i < n-1 && currSum + nums[i] < target) {
        currSum += nums[i];
        i++;
    }
    
    vector<int> subvector1(nums.begin(), nums.begin() + i);
    vector<int> subvector2(nums.begin() + i, nums.end());
    
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
    
    cout << result.first.size() << endl;
    for (int num : result.first) {
        cout << num << endl;
    }
    
    cout << result.second.size() << endl;
    for (int num : result.second) {
        cout << num << endl;
    }
    
    return 0;
}