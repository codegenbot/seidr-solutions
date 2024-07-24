```cpp
#include <algorithm>
#include <tuple>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> numSumIndex;
    
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        int n = nums[i];
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        numSumIndex.push_back({sum, i});
    }

    sort(numSumIndex.begin(), numSumIndex.end());
    
    vector<int> result;
    for (auto& p : numSumIndex) {
        result.push_back(nums[p.second]);
    }
    
    return result;
}