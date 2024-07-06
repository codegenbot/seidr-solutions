#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> res(2);
    int diff = INT_MAX;
    for (int i = 1; i < n; i++) {
        int currDiff = abs(vec[i] - vec[i-1]);
        if (currDiff < diff) {
            diff = currDiff;
            res[0].clear();
            res[0].assign(min(res[0].begin(), minDiff.begin()), max(res[0].end(), minDiff.end()));
            res[1].clear();
            res[1].assign(min(res[1].begin(), vec.begin() + minDiff.size()), max(res[1].end(), vec.end()));
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    vector<vector<int>> res = cutVector(vec);
    cout << "[";
    for (int i = 0; i < res[0].size(); i++) {
        cout << res[0][i] << " ";
    }
    cout << "] [" << "[";
    for (int i = 0; i < res[1].size(); i++) {
        cout << res[1][i] << " ";
    }
    cout << "]";
    return 0;
}