#include <algorithm>
#include <vector>
#include <utility>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<vector<int>> order_by_points(vector<vector<int>> nums) {
    vector<pair<int, int>> numSumIndex;

    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        int n = 0;
        for(int j = 0; j < nums[i].size(); j++) {
            n = nums[i][j];
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
        }
        numSumIndex.push_back({sum, i});
    }

    sort(numSumIndex.begin(), numSumIndex.end());
    
    vector<vector<int>> result;
    for (auto& p : numSumIndex) {
        result.push_back(nums[p.second]);
    }
    
    return result;
}