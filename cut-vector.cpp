#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> &nums) {
    int n = nums.size();
    vector<vector<int>> res;
    
    for (int i = 0; i < n - 1; i++) {
        int diff = abs(nums[i] - nums[i + 1]);
        if (i == 0 || nums[i] != nums[0]) {
            res.push_back({nums[0], nums[i]});
        } else {
            res.push_back({nums[0]});
        }
        
        for (int j = i; j < n - 1; j++) {
            if (abs(nums[j + 1] - nums[j]) <= diff) {
                res.back().push_back(nums[j]);
                break;
            } else {
                res.back().push_back(nums[j]);
                res.push_back({nums[j + 1]});
                break;
            }
        }
    }
    
    if (n > 0) {
        res.back().push_back(nums[n - 1]);
    }
    
    return res;
}