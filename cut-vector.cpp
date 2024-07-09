#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    res[0].push_back(v[0]);
    for (int i = 1; i < n; ++i) {
        if (v[i] - v[0] <= 0) {
            res[0].push_back(v[i]);
        } else {
            res[0].pop_back();
            res[1].push_back(v[i]);
            break;
        }
    }
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