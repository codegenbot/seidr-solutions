#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n; ++i) {
        if (i == 0 || v[i] != v[0]) {
            int leftSum = 0, rightSum = 0;
            for (int j = 0; j <= i; ++j) {
                leftSum += v[j];
            }
            for (int j = i + 1; j < n; ++j) {
                rightSum += v[j];
            }
            if (i == 0 || abs(leftSum - rightSum) <= abs(v[0] - rightSum)) {
                res[0].clear();
                for (int j = 0; j <= i; ++j) {
                    res[0].push_back(v[j]);
                }
                res[1].clear();
                for (int j = i + 1; j < n; ++j) {
                    res[1].push_back(v[j]);
                }
            }
        }
    }
    return res;
}