#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int min_diff = INT_MAX;
    vector<vector<int>> result;
    
    for (int i = 1; i <= nums.size(); i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; j++) {
            left_sum += nums[j];
        }
        
        for (int j = i; j < nums.size(); j++) {
            right_sum += nums[j];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff <= min_diff) {
            min_diff = diff;
            result = {{}, {}};
            
            for (int j = 0; j < i; j++) {
                result[0].push_back(nums[j]);
            }
            
            for (int j = i; j < nums.size(); j++) {
                result[1].push_back(nums[j]);
            }
        }
    }
    
    return result;
}

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    nums.push_back(n);
    // Read the rest of the input
    // ...
    vector<vector<int>> res = cutVector(nums);
    for (auto &v : res) {
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}