#include <vector>
#include <iostream> 
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<int> left;
    vector<int> right;
    for(int i=0; i<n-1; i++){
        if(abs(nums[i+1] - nums[i]) >= abs(nums[n-1] - nums[0])){
            break;
        } else {
            left.push_back(nums[i]);
        }
    }
    for(int i=left.size(); i<n; i++) right.push_back(nums[i]);
    
    return {{left}, {right}};
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