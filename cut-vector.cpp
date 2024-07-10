#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res(2);
    int min_diff = INT_MAX;
    int cut_idx = -1;
    
    for(int i=0; i<n-1; i++){
        int left_sum = 0, right_sum = 0;
        for(int j=i; j<i+(n-i)/2; j++){
            left_sum += nums[j];
        }
        for(int j=i+(n-i)/2; j<n; j++){
            right_sum += nums[j];
        }
        
        int diff = abs(left_sum - right_sum);
        if(diff < min_diff){
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    res[0] = vector<int>(nums.begin(), nums.begin() + cut_idx+1);
    res[1] = vector<int>(nums.begin()+cut_idx, nums.end());
    return res;
}