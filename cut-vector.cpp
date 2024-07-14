```cpp
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
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
    vector<int> left;
    vector<int> right;
    for (int i = 0; i < split_index; i++) {
        left.push_back(v[i]);
    }
    res.first = left;
    left.clear();
    for (int i = split_index; i < v.size(); i++) {
        right.push_back(v[i]);
    }
    res.second = right;
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "[";
    for (int i = 0; i < res.first.size(); i++) {
        cout << res.first[i];
        if (i < res.first.size() - 1) {
            cout << " ";
        }
    }
    cout << "] [";
    for (int i = 0; i < res.second.size(); i++) {
        cout << res.second[i];
        if (i < res.second.size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    return 0;
}