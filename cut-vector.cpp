```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<int> minCut(vector<int>& nums) {
    int n = nums.size();
    int min_idx = -1;
    for(int i=0; i<n-1; i++){
        int diff = nums[i+1] - nums[i];
        if(diff == 0 && (min_idx == -1 || i < min_idx)) min_idx = i;
        else if(diff > 0 && (min_idx == -1 || i < min_idx)) min_idx = i;
    }
    if(min_idx == -1) {
        vector<int> res(1);
        for(int i=0; i<n; i++)
            res[0].push_back(nums[i]);
    } else {
        vector<vector<int>> res(2);
        res[0].clear();
        for(int i=0; i<=min_idx; i++)
            res[0].push_back(nums[i]);
        res[1].clear();
        for(int i=min_idx+1; i<n; i++)
            res[1].push_back(nums[i]);
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &num : nums) cin >> num;

    vector<vector<int>> result = minCut(nums);

    cout << "The two resulting subvectors are: " << endl;
    for(int i=0; i<result.size(); i++) {
        cout << "[";

        for(int j=0; j<result[i].size()-1; j++)
            cout << result[i][j] << ", ";
        
        if(result[i].size() > 0) 
            cout << result[i].back();
        cout << "]" << endl;
    }
}