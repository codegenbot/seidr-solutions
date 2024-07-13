#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 1; i < n; i++) {
        if (abs(v[i] - v[0]) <= abs(v[i] - v[i-1])) {
            res[0].insert(res[0].end(), v.begin(), v.begin() + i);
            res[1].insert(res[1].begin(), v.begin() + i, v.end());
            break;
        } else if (i == n - 1) {
            res[0].insert(res[0].end(), v.begin(), v.end());
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
    vector<vector<int>> res = cutVector(v);
    cout << "[";
    for (int i = 0; i < res[0].size(); i++) {
        cout << res[0][i] << " ";
    }
    cout << "] [" << res[1][0];
    for (int i = 1; i < res[1].size(); i++) {
        cout << " " << res[1][i];
    }
    cout << "]" << endl;
    return 0;
}