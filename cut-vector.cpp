#include <vector>
#include <numeric>

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<int> sums(n+1);
    for(int i=0; i<n; i++){
        sums[i+1] = accumulate(nums.begin(), nums.begin() + (i+1), 0);
    }
    int min_diff = INT_MAX;
    int index = 0;
    for(int i=1; i<=n-1; i++){
        if(abs((sums[n]-sums[i])-sums[i]) < min_diff){
            min_diff = abs((sums[n]-sums[i])-sums[i]);
            index = i;
        }
    }
    return {{std::vector<int>(nums.begin(), nums.begin()+index)},
            {std::vector<int>(nums.begin()+index, nums.end()))}};