```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    res.push_back({}); // initialize an empty vector
    int min_diff = INT_MAX;
    int split_index = -1;
    for (int i = 1; i < n; i++) {
        if (v[i] == v[0]) {
            if ((i == n - 1) || (v[i+1] != v[0])) {
                min_diff = abs(v[i] - v[i-1]);
                split_index = i;
            }
        } else {
            int diff = abs(v[i] - v[i-1]);
            if (diff < min_diff) {
                min_diff = diff;
                split_index = i;
            }
        }
    }
    for (int i = 0; i < split_index; i++) {
        res.back().push_back(v[i]);
    }
    res.push_back({});
    for (int i = split_index; i < v.size(); i++) {
        res.back().push_back(v[i]);
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