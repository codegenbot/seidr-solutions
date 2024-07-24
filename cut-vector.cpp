```cpp
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        if (abs(v[i] - v[i + 1]) <= abs(v[0] - v[n - 1])) {
            return {{v.begin(), v.begin() + i + 1}, {v.begin() + i, v.end()}};
    }
    return {{v}, {}};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "[";
    for (const auto &x : res.first) cout << x << " ";
    cout << "]\n[";
    for (const auto &x : res.second) cout << x << " ";
    cout << "]\n";
    return 0;
}