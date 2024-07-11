#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<int> left;
    vector<int> right;
    for(int i=0; i<n-1; i++){
        if((nums[i+1] - nums[i]) <= 0){
            for(int j=i; j<=i; j++){
                left.push_back(nums[j]);
            }
            break;
        } else {
            left.push_back(nums[i]);
        }
    }
    for(int i=left.size(); i<n; i++) right.push_back(nums[i]);
    
    return {{left}, {right}};
}