#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    res[0].push_back(v[0]);
    int sum1 = v[0], sum2 = 0;
    for (int i = 1; i < n; ++i) {
        if (abs(sum1 - sum2) <= abs(v[i] - v[0])) {
            sum1 += v[i];
            res[0].push_back(v[i]);
        } else {
            sum2 += v[i];
            res[1].push_back(v[i]);
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