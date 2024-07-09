```cpp
#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    res[0].resize(0);
    res[1].resize(0);
    int minDiff = INT_MAX;
    for (int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; j++) {
            leftSum += v[j];
        }
        for (int j = i + 1; j < n; j++) {
            rightSum += v[j];
        }
        if (leftSum == rightSum || abs(leftSum - rightSum) < minDiff) {
            minDiff = leftSum == rightSum ? 0 : abs(leftSum - rightSum);
            res[0].clear();
            for (int j = 0; j <= i; j++) {
                res[0].push_back(v[j]);
            }
            res[1].clear();
            for (int j = i + 1; j < n; j++) {
                if (i < 1) {
                    res[1].push_back(v[j]); 
                } else {
                    res[1].push_back(v[j]);
                }
            }
        }
    }
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