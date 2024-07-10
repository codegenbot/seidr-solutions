#include <vector>
#include <algorithm>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int n = v.size();
    long long total_sum = accumulate(v.begin(), v.end(), 0LL);
    
    pair<long long, long long> prefix_sum = {{0}, {accumulate(v.begin(), v.end(), 0LL)}};
    
    int min_diff = INT_MAX;
    vector<int> left, right;
    
    for (int i = 0; i < n; ++i) {
        if (prefix_sum.second - prefix_sum.first >= total_sum / 2) {
            min_diff = std::min(min_diff, std::abs(total_sum - 2LL * prefix_sum.second));
            left = {begin(v), begin(v) + i};
            right = {end(v) - (n - i - 1), end(v)};
        }
    }
    
    return {{left}, {right}};
}