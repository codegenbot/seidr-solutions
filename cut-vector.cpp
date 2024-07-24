#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n; ++i) {
        if (i == 0 || v[i] != v[0]) {
            res[0].clear();
            res[1].clear();
            res[0].push_back(v[0]);
            int sum1 = 0, sum2 = 0;
            for (int j = 1; j <= i; ++j) {
                sum1 += v[j];
                if (sum1 == sum2) break;
            }
            for (int j = i + 1; j < n; ++j) {
                sum2 += v[j];
                if (sum1 == sum2) break;
            }
            res[0].insert(res[0].end(), v.begin() + 1, v.begin() + i);
            res[1].insert(res[1].begin(), v.begin() + i, v.end());
        } else {
            res[0].push_back(v[i]);
            res[1].clear();
        }
    }
    return res;
}