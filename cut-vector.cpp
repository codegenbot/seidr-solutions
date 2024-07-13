#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    int min_diff = INT_MAX;
    int cut_index = 0;
    for (int i = 1; i < n; i++) {
        int diff = abs(v[i] - v[i-1]);
        if (diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    res[0] = vector<int>(v.begin(), v.begin() + cut_index);
    res[1] = vector<int>(v.begin() + cut_index, v.end());
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