#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res(2);

    for(int i=0; i<n-1; i++){
        if(nums[i] == nums[i+1]){
            res[0].push_back(nums[i]);
            res[1].clear();
            res[1].push_back(nums[i+1]);
        } else {
            int diff = INT_MAX;
            for(int j=i; j<n-1; j++){
                if(abs(nums[j] - nums[j+1]) < diff){
                    i=j;
                    diff=abs(nums[j]-nums[j+1]);
                }
            }
            res[0].push_back(nums[i]);
            res[1].clear();
            for(int j=i+1; j<n;j++){
                res[1].push_back(nums[j]);
            }
        }
    }

    if(res[0].size() == 0) {
        res[0] = nums;
        res[1].clear();
    }

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