#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 0; i < n; i++) {
        if (i == 0 || v[i] != v[0]) {
            res[0].push_back(v[i]);
        } else {
            res[0].clear();
            res[0].push_back(v[0]);
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1 || v[i] != v[n - 1]) {
            res[1].push_back(v[i]);
        } else {
            res[1].clear();
            res[1].push_back(v[n - 1]);
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> result = cutVector(v);
    for (auto &vec : result) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}