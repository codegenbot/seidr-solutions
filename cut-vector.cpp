#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res(2);
    int minDiff = INT_MAX;
    int idx1, idx2;

    for(int i=0; i<n-1; i++){
        if(abs(nums[i] - nums[i+1]) < minDiff){
            minDiff = abs(nums[i]-nums[i+1]);
            idx1 = i;
            idx2 = i+1;
        }
    }

    res[0].assign(nums.begin(), nums.begin() + idx1);
    res[1].assign(nums.begin() + idx2, nums.end());

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