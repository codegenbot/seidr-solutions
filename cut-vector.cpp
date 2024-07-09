#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n; i++) {
        if (i == 0 || v[i] != v[0]) {
            int leftSum = 0, rightSum = 0;
            int minDiff = INT_MAX, bestCut = -1;
            for (int j = 0; j <= i; j++) {
                leftSum += v[j];
            }
            for (int j = i + 1; j < n; j++) {
                rightSum += v[j];
            }
            if (leftSum == rightSum) {
                res[0] = vector<int>(v.begin(), v.begin() + i + 1);
                res[1] = vector<int>(v.begin() + i, v.end());
                return res;
            } else if (abs(leftSum - rightSum) < minDiff) {
                minDiff = abs(leftSum - rightSum);
                bestCut = i;
            }
        }
    }
    // If no cut found, the whole array is the result
    res[0] = vector<int>(v.begin(), v.end());
    res[1].clear();
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    cout << "[";
    for (int i = 0; i < res[0].size(); i++) {
        cout << res[0][i];
        if (i < res[0].size() - 1) {
            cout << " ";
        }
    }
    cout << "] [";
    for (int i = 0; i < res[1].size(); i++) {
        cout << res[1][i];
        if (i < res[1].size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    return 0;
}