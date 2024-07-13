#include <vector>
#include <numeric>
#include <climits>
#include <cmath>

std::vector<std::vector<int>> cutVector(std::vector<int> v) {
    int n = v.size();
    std::vector<std::vector<int>> res(2);
    
    long long minDiff = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        long long leftSum = std::accumulate(v.begin(), v.begin() + i, 0LL);
        long long rightSum = std::accumulate(v.begin() + i, v.end(), 0LL);
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            res[0] = std::vector<int>(v.begin(), v.begin() + i);
            res[1] = std::vector<int>(v.begin() + i, v.end());
        }
    }
    
    return res;
}