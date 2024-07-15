#include <vector>
#include <climits>
#include <iostream>

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int splitIndex = 0;

    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[0]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    return {{v.begin(), v.begin() + splitIndex}, {v.begin() + splitIndex, v.end()}};
}

int main() {
    using namespace std;
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "[";
    for (const auto &x : res.first) cout << x << " ";
    cout << "]\n[";
    for (const auto &x : res.second) cout << x << " ";
    cout << "]\n0\n";
    return 0;
}