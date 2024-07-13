#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            res[0].push_back(v[i]);
            res[1].clear();
        } else {
            int leftSum = 0, rightSum = 0;
            for (int j = 0; j < i; j++) {
                leftSum += v[j];
            }
            for (int j = i; j < n; j++) {
                rightSum += v[j];
            }
            if (leftSum == rightSum) {
                res[0].push_back(v[i]);
                res[1] = v;
                break;
            } else {
                int minDiff = abs(leftSum - rightSum);
                for (int j = i; j < n; j++) {
                    int newLeftSum = leftSum + v[j];
                    int newRightSum = rightSum - v[j];
                    if (abs(newLeftSum - newRightSum) < minDiff) {
                        res[0].push_back(v[i]);
                        res[1] = v;
                        break;
                    }
                }
            }
        }
    }
    return res;
}