```cpp
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int min_idx = -1;
    for(int i=0; i<n-1; i++){
        int diff = nums[i+1] - nums[i];
        if(diff == 0 && (min_idx == -1 || i < min_idx)) min_idx = i;
        else if(diff > 0 && (min_idx == -1 || i < min_idx)) min_idx = i;
    }
    if(min_idx == -1) {
        return {{nums}};
    } else {
        vector<int> left(nums.begin(), nums.begin()+min_idx+1);
        vector<int> right(nums.begin()+min_idx, nums.end());
        return {{left}, {right}};
    }
}