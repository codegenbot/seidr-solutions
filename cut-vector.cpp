#include <vector>
#include <iostream>

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int pos = 0;

    for (int i = 1; i <= n / 2; ++i) {
        if (abs(v[i] - v[n-i-1]) < minDiff) {
            minDiff = abs(v[i] - v[n-i-1]);
            pos = i;
        }
    }

    vector<int> left(v.begin(), v.begin() + pos);
    vector<int> right(v.begin() + pos, v.end());

    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 0; i <= n; ++i) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << res.first.size() << endl;
    for (int num : res.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << res.second.size() << endl;
    for (int num : res.second) {
        cout << num << " ";
    }
    return 0;
}