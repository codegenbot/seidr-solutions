#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int idx;
    for (int i = 0; i < n; i++) {
        if (v[i] == v[0]) {
            return {{v[0]}, {v.begin() + i, v.end()}};
        }
        int diff = abs(v[i] - v[0]);
        if (diff < minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    vector<int> left(v.begin(), v.begin() + idx);
    vector<int> right({v[idx]}, v.end());
    return {left, right};
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
    for (int x : res.first) {
        cout << x << " ";
    }
    cout << "] [";
    for (int x : res.second) {
        cout << x << " ";
    }
    cout << "]" << endl;
    return 0;
}