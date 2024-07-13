#include <climits>
#include <cmath>

using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            res[0].push_back(v[i]);
            res[1].push_back(v[i]);
        } else {
            int minDiff = INT_MAX;
            int cutIndex = -1;
            for (int j = 0; j < i; j++) {
                int diff = abs(v[j] - v[i]);
                if (diff < minDiff) {
                    minDiff = diff;
                    cutIndex = j;
                }
            }
            res[0].insert(res[0].begin(), v.begin(), v.begin() + cutIndex);
            res[1].push_back(v[i]);
            for (int j = i; j < n; j++) {
                res[1].push_back(v[j]);
            }
        }
    }
    return res;
}