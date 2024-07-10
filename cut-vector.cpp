#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n; i++) {
        if (i == 0 || v[i] != v[0]) {
            int diff = INT_MAX;
            int pos = -1;
            for (int j = 0; j <= i; j++) {
                int curDiff = abs(v[j] - v[0]);
                if (curDiff < diff) {
                    diff = curDiff;
                    pos = j;
                }
            }
            res[0].insert(res[0].end(), v.begin(), v.begin() + pos);
            res[1].insert(res[1].begin(), v.begin() + pos, v.end());
            break;
        }
    }
    return res;
}