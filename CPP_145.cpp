#include <algorithm>
#include <vector>

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        pairs.emplace_back(abs(nums[i]), i);
    }
    sort(pairs.begin(), pairs.end());
    vector<int> result;
    for (const auto& pair : pairs) {
        if(pair.first > 0){
            if(pair.second >= 0)
                result.push_back(1);
            else
                result.push_back(-1);
        }
        else
            result.push_back(nums[pair.second]);
    }
    return result;
}