#include <vector>
#include <climits>
#include <cmath>
using namespace std;

vector<pair<vector<int>, vector<int>>> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int pos = -1;
    
    for(int i=0; i<nums.size()-1; ++i) {
        int diff = std::abs(nums[i] - nums[i+1]);
        if(diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    vector<pair<vector<int>, vector<int>>> result;
    vector<int> left(nums.begin(), nums.begin()+pos+1);
    vector<int> right(nums.begin()+pos, nums.end());
    result.push_back({left, right});
    
    return result;
}