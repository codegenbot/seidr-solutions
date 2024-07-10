#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res(2);

    if (n == 0)
        return res;

    int min_diff = INT_MAX, prev_diff = INT_MAX;
    int idx = 0, prev_idx = 0;

    for (int i = 1; i < n; i++) {
        int diff = abs(nums[i] - nums[i-1]);
        if (diff < prev_diff) {
            min_diff = diff;
            idx = i;
            prev_idx = i-1;
            prev_diff = diff;
        }
    }

    res[0].clear();
    for (int i = 0; i <= prev_idx; i++)
        res[0].push_back(nums[i]);
    res[1].clear();
    for (int i = prev_idx + 1; i < n; i++)
        res[1].push_back(nums[i]);

    return res;
}

int main() {
    vector<int> nums = {1, 0};
    vector<vector<int>> result = cutVector(nums);
    for(int i=0; i<2; i++){
        for(int j=0; j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}