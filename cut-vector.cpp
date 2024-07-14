#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    vector<vector<int>> result;
    int minDiff = INT_MAX, prev = 0;
    for (int i = 1; i <= v.size(); i++) {
        if (i == v.size() || v[i] != v[prev]) {
            int diff = abs(i - prev) * (v[i] - v[prev]);
            if (diff < minDiff) {
                minDiff = diff;
                result.push_back(vector<int>(v.begin(), v.begin() + i));
                result.push_back(vector<int>(v.begin() + i, v.end()));
            }
            prev = i;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    vector<vector<int>> res = cutVector(v);
    for (const auto &x : res) {
        for (int y : x) {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}