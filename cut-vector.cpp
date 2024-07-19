#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        if (sum * 2 != v[i + 1] && sum <= v[i]) {
            res[0].insert(res[0].end(), v.begin(), v.begin() + i + 1);
            res[1].insert(res[1].begin(), v.begin() + i + 1, v.end());
            return res;
        }
    }
    if (sum != 0) {
        long long temp = sum;
        sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            sum += v[i];
            if (temp + sum == v[n - 1]) {
                res[0].insert(res[0].end(), v.begin(), v.begin() + i);
                res[1].insert(res[1].begin(), v.begin() + i, v.end());
                return res;
            }
        }
    } else {
        res[0] = v;
        res[1].clear();
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
    for (auto &v : res) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}