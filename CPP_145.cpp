#include <algorithm>
bool issame(int a, int b) {
    return abs(a) == abs(b);
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        pairs.emplace_back(abs(nums[i]), i);
    }
    sort(pairs.begin(), pairs.end());
    vector<int> result;
    for (const auto& pair : pairs) {
        if (!issame(pair.first, 0)) {
            result.push_back(pair.second * (pair.first > 0 ? -1 : 1));
        }
    }
    return result;
}