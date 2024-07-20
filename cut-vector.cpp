#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 1; i < n; i++) {
        if (v[i] - v[0] <= v[n-1] - v[i]) {
            res[0].insert(res[0].end(), v.begin(), v.begin() + i+1);
            res[1].insert(res[1].begin(), v.begin() + i, v.end());
            break;
        }
    }
    return res;
}