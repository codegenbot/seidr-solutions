#include <vector>
#include <limits> // for LLONG_MAX
#include <numeric> // for std::accumulate>
using namespace std;

std::vector<std::vector<int>> cutVector(std::vector<int> v) {
    int n = v.size();
    std::vector<std::vector<int>> res(2);
    
    long long minDiff = numeric_limits<long long>::max();
    for (int i = 0; i < n; i++) {
        long long leftSum = std::accumulate(v.begin(), v.begin() + i, 0LL);
        long long rightSum = std::accumulate(v.begin() + i, v.end(), 0LL);
        
        if (leftSum == rightSum) {
            res[0] = vector<int>(v.begin(), v.begin() + i);
            res[1] = vector<int>(v.begin() + i, v.end());
            return res;
        }
        
        long long diff = std::abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            res[0] = vector<int>(v.begin(), v.begin() + i);
            res[1] = vector<int>(v.begin() + i, v.end());
        }
    }
    
    return res;
}