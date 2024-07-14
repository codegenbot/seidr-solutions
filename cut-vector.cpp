#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& nums) {
    int min_diff = INT_MAX;
    int idx = 0;
    for(int i = 1; i < nums.size(); i++){
        if(abs(nums[i] - nums[0]) <= min_diff){
            min_diff = abs(nums[i] - nums[0]);
            idx = i;
        }
    }

    vector<int> left, right;
    left.resize(idx + 1);
    for(int i = 0; i <= idx; i++){
        left[i] = nums[i];
    }
    right.resize(nums.size() - idx - 1);
    for(int i = idx + 1; i < nums.size(); i++){
        right[i-idx-1] = nums[i];
    }

    return make_pair(left, right);
}