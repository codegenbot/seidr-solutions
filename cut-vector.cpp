#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 1; i < n; i++) {
        if (v[i] - v[0] <= v[n-1] - v[i]) {
            res[0] = vector<int>(v.begin(), v.begin() + i);
            res[1] = vector<int>(v.begin() + i, v.end());
            return res;
        }
    }
    res[0] = vector<int>(v.begin(), v.end());
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
    cout << "[";
    for (int i = 0; i < res[0].size(); i++) {
        cout << res[0][i] << " ";
    }
    cout << "] [" << res[1][0];
    for (int i = 1; i < res[1].size(); i++) {
        cout << " " << res[1][i];
    }
    cout << "]\n";
    return 0;
}