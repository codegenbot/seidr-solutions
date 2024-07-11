#include <vector>
#include <iostream> 
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int min_diff = INT_MAX, idx = -1;
    
    for(int i=0; i<n-1; i++){
        if(abs(nums[i+1] - nums[i]) <= min_diff){
            min_diff = abs(nums[i+1] - nums[i]);
            idx = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin()+idx+1);
    vector<int> right(nums.begin()+idx, nums.end());
    
    return {{left}, {right}};
}

int main() {
    vector<int> nums = {6513, 1688};
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