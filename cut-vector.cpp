#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    for (int i = 1; i < n; ++i) {
        if ((v[i] - v[0]) <= (n - i)*(v[n-1] - v[0])) {
            res.push_back({v.begin(), v.end()});
            return {{}, {v.begin(), v.end()}};
        }
    }
    
    vector<int> left(v.begin(), v.begin());
    vector<int> right(v.begin() + 1, v.end());
    res = {{left},{right}};
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    cout << "[";
    for (int i = 0; i < v.size(); ++i) {
        if (i > 0) cout << ", ";
        cout << v[i];
    }
    cout << "]\n";

    vector<vector<int>> res = cutVector(v);
    cout << "[";
    for (auto &x : res[0]) {
        if (res[0].size() > 1 || i++ > 0) cout << ", ";
        cout << x;
    }
    cout << "], [";
    i = 0;
    for (auto &x : res[1]) {
        if (res[1].size() > 1 || i++ > 0) cout << ", ";
        cout << x;
    }
    cout << "]\n";

    return 0;
}