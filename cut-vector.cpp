#include <iostream>
#include <numeric>
#include <vector>
#include <limits> 
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);

    long long minDiff = numeric_limits<long long>::max();
    for (int i = 0; i < n; i++) {
        long long leftSum = accumulate(v.begin(), v.begin() + i, 0LL);
        long long rightSum = accumulate(v.begin() + i, v.end(), 0LL);

        if (leftSum == rightSum) {
            res[0].resize((i - v.begin()).size());
            copy(v.begin(), v.begin() + i, back_inserter(res[0]));
            res[1] = vector<int>(v.begin() + i, v.end());
            return res;
        }

        long long diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            res[0].resize((i - v.begin()).size());
            copy(v.begin(), v.begin() + i, back_inserter(res[0]));
            res[1] = vector<int>(v.begin() + i, v.end());
        }
    }

    return res;
}