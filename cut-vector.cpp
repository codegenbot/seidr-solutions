#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<int> left;
    int minDiff = INT_MAX;
    for(int i=0; i<n-1; i++){
        if(abs(nums[i+1] - nums[i]) <= abs(nums[1] - nums[0])){
            minDiff = abs(nums[i+1] - nums[i]);
        } else {
            break;
        }
        left.push_back(nums[i]);
    }
    return {{left}, {vector<int>(nums.begin()+left.size(), nums.end())}};
}

int main() {
    vector<int> nums = {2, 6513, 1688};
    vector<vector<int>> result = cutVector(nums);
    for(int i=0; i<result.size(); i++) {
        cout << "Subvector " << (i+1) << ": ";
        for(int j=0; j<result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}