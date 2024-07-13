#include <vector>
#include <iostream>
#include <climits>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int leftSum = 0;
    for (int i = 0; i < v.size(); i++) {
        leftSum += v[i];
    }

    int rightSum = 0;
    for (int i = v.size() - 1; i >= 0; i--) {
        rightSum += v[i];

        if(abs(leftSum - rightSum) <= 1) {
            vector<vector<int>> res(2);
            res[0] = vector<int>(v.begin(), v.begin() + i+1);
            res[1] = vector<int>(v.begin() + i+1, v.end());
            return res;
        }
    }
    
    return {{}, {}};
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