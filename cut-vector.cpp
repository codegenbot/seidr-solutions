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
                int sum1 = 0, sum2 = 0;
                for (int k = 0; k < j; k++) {
                    sum1 += v[k];
                }
                for (int k = j; k <= i; k++) {
                    sum2 += v[k];
                }
                if (abs(sum1 - sum2) < diff) {
                    diff = abs(sum1 - sum2);
                    pos = j;
                }
            }
            res[0].assign(v.begin(), v.begin() + pos);
            res[1].assign(v.begin() + pos, v.end());
        } else {
            res[0] = v;
            res[1].clear();
        }
        break;
    }
    return res;
}