#include <vector>
#include <limits> 
#include <numeric>
#include <cmath>

using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);

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