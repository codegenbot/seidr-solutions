#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n; i++) {
        if (i == 0 || v[i] - v[0] > v[n-i-1] - v.back()) {
            res[0].clear(); res[0].push_back(v[0]);
            for (int j = 1; j <= i; j++) {
                if (v[j] - v[0] >= v[i-j] - v.back()) break;
                res[0].push_back(v[j]);
            }
            res[1].clear(); res[1].push_back(v.back());
            for (int j = n-2; j >= i; j--) {
                if (v[n-j-1] - v.back() >= v[i-j] - v[0]) break;
                res[1].push_back(v[j]);
            }
        } else {
            res[0].clear(); res[0].push_back(v[0]);
            for (int j = 1; j < i; j++) {
                res[0].push_back(v[j]);
            }
            res[1].clear(); res[1].push_back(v[i]);
            for (int j = i+1; j < n; j++) {
                res[1].push_back(v[j]);
            }
        }
    }
    return res;
}