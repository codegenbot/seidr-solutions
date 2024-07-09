````
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    res[0].push_back(v[0]);
    int minDiff = INT_MAX;
    int index = 0;
    for (int i = 1; i < n; ++i) {
        if (abs(v[i] - v[0]) < minDiff) {
            minDiff = abs(v[i] - v[0]);
            index = i;
        }
    }
    res[0].insert(res[0].end(), v.begin() + 1, v.begin() + index);
    res[1].insert(res[1].begin(), v.begin() + index, v.end());
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<vector<int>> result = cutVector(v);
    for (auto &v : result) {
        for (auto x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
```