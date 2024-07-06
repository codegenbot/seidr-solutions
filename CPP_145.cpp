#include <algorithm>
#include <vector>

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

int main() {
    assert (issame({-76, -21, 0, 4, 23, 6, 6}, order_by_points({0,6,6,-76,-21,23,4})));
    vector<int> order_by_points(vector<int> nums) {
        vector<pair<int, int>> pairs;
        for (int i = 0; i < nums.size(); i++) {
            pairs.emplace_back(abs(nums[i]), i);
        }
        sort(pairs.begin(), pairs.end());
        vector<int> result;
        for (const auto& pair : pairs) {
            result.push_back(pair.first > 0 ? pair.second >= 0 ? 1 : -1 : nums[pair.second]);
        }
        return result;
    }