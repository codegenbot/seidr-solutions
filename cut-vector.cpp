#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<int> prefixSum(n + 1);
    for (int i = 0; i < n; ++i) {
        prefixSum[i + 1] = prefixSum[i] + v[i];
    }

    int minDiff = INT_MAX;
    int pos;
    for (int i = 1; i <= n; ++i) {
        int leftSum = prefixSum[i];
        int rightSum = prefixSum[n] - leftSum;
        if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            pos = i;
        }
    }

    vector<vector<int>> result(2);
    result[0].resize(pos);
    result[1].resize(n - pos);

    for (int i = 0; i < pos; ++i) {
        result[0][i] = v[i];
    }

    for (int i = 0; i < n - pos; ++i) {
        result[1][i] = v[pos + i];
    }

    return result;
}