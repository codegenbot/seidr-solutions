#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int idx = 0;
    for (int i = 1; i <= v.size(); ++i) {
        if (v[i - 1] == v[0]) {
            return {vector<int>(v.begin(), v.begin() + i), vector<int>(v.begin() + i, v.end())};
        }
        int diff = abs(v[i - 1] - v[0]);
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    return {vector<int>{}, vector<int>(v.begin(), v.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "0 ";
    for (auto x : res.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "1 ";
    for (auto x : res.second) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}