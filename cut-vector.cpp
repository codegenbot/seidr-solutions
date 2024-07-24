#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 1; i < n; i++) {
        if (abs(v[i] - v[0]) <= abs(v[i] - v[i-1])) {
            res[0].clear();
            res[0].insert(res[0].end(), v.begin(), v.begin() + i);
            res[1].clear();
            res[1].insert(res[1].begin(), v.begin() + i, v.end());
            return res;
        }
    }
    res[0] = v;
    res[1].clear();
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