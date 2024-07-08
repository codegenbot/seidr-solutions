#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int idx = 0;
    for (int i = 1; i <= v.size(); ++i) {
        if (v[i-1] == v[0]) {
            return {{}, vector<int>(v.begin(), v.end())};
        }
        int diff = abs(v[i-1] - v[0]);
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    pair<vector<int>, vector<int>> res;
    res.first = vector<int>(v.begin(), v.end() - idx);
    res.second = vector<int>(1, v[idx-1]);
    return res;
}

int main() {
    int n; cin >> n;
    vector<int> v(n+1);
    for (int i = 0; i <= n; ++i) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    for (auto num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    for (auto num : result.second) {
        cout << num << " ";
    }
    return 0;
}