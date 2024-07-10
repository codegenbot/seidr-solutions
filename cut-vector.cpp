#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n; ++i) {
        if (i == 0 || v[i] == v[0]) {
            res[0].clear(); res[1].clear();
            res[0].insert(res[0].end(), v.begin(), v.begin() + i);
            res[1].insert(res[1].begin(), v.begin() + i, v.end());
        } else if (i == n - 1 || v[i] == v[n - 1]) {
            res[0].clear(); res[1].clear();
            res[0].insert(res[0].end(), v.begin(), v.begin() + i);
            res[1].insert(res[1].begin(), v.begin() + i, v.end());
        } else if (abs(v[i] - v[0]) <= abs(v[n - 1] - v[i])) {
            res[0].clear(); res[1].clear();
            res[0].insert(res[0].end(), v.begin(), v.begin() + i);
            res[1].insert(res[1].begin(), v.begin() + i, v.end());
        } else {
            res[0].clear(); res[1].clear();
            res[0].insert(res[0].end(), v.begin(), v.begin() + (n - 1));
            res[1].insert(res[1].begin(), v.begin() + (n - 1), v.end());
        }
    }
    return res;
}