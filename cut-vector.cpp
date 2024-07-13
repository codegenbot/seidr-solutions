#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    for (int i = 0; i < n - 1; ++i) {
        if (abs(v[i] - v[i + 1]) <= abs(v[0] - v[n - 1])) {
            vector<vector<int>> res(2);
            res[0].resize(i + 1);
            for (int j = 0; j <= i; ++j) {
                res[0][j] = v[j];
            }
            res[1].resize(n - i - 1);
            for (int j = i + 1; j < n; ++j) {
                res[1][j - i - 1] = v[j];
            }
            return res;
        }
    }
    vector<vector<int>> res(2);
    res[0].push_back(v[0]);
    res[1].insert(res[1].end(), v.begin() + 1, v.end());
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    for (auto &x : res) {
        for (int y : x) {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}