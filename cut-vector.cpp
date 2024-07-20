#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            res.push_back({v[i]});
        } else {
            int min_diff = INT_MAX;
            int cut_idx = 0;
            for (int j = 1; j <= i; j++) {
                int diff = abs(v[j] - v[0]);
                if (diff < min_diff) {
                    min_diff = diff;
                    cut_idx = j;
                }
            }
            res.push_back({v[0]});
            res.push_back({v.begin() + cut_idx, v.end()});
        }
    }
    return res;
}