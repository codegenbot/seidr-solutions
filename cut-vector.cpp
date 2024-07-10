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
                int leftSum = 0, rightSum = 0;
                for (int k = 0; k < j; k++) {
                    leftSum += v[k];
                }
                for (int k = j; k <= i; k++) {
                    rightSum += v[k];
                }
                if (abs(leftSum - rightSum) < diff) {
                    diff = abs(leftSum - rightSum);
                    pos = j;
                }
            }
            res[0].assign(v.begin(), v.begin() + pos);
            res[1].assign(v.begin() + pos, v.end());
            break;
        }
    }
    return res;
}