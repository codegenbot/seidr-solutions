#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res(2);

    if (n == 0)
        return res;

    int min_diff = INT_MAX;
    int idx = 0, prev_idx = 0;

    for (int i = 1; i <= n; i++) {
        int sum1 = 0, sum2 = 0;
        for(int j=0;j<i;j++){
            sum1 += nums[j];
        }
        for(int j=i;j<n;j++){
            sum2 += nums[j];
        }

        if(abs(sum1 - sum2) < min_diff){
            min_diff = abs(sum1 - sum2);
            idx = i;
            prev_idx = i-1;
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
    vector<int> nums = {6513,1688};
    vector<vector<int>> result = cutVector(nums);
    for(int i=0; i<2; i++){
        for(int j=0; j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}