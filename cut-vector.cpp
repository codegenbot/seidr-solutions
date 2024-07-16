#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    for (int i = 1; i < n; ++i) {
        if (abs(v[i] - v[0]) <= abs(v[i-1] - v[0])) {
            res[0] = vector<int>(v.begin(), v.begin() + i);
            res[1] = vector<int>(v.begin() + i, v.end());
            break;
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 0; i <= n; ++i) {
        cin >> v[i];
    }
    vector<vector<int>> result = cutVector(v);
    cout << "[";
    for (int i = 0; i < result[0].size(); ++i) {
        cout << result[0][i];
        if (i < result[0].size() - 1) {
            cout << " ";
        }
    }
    cout << "] [";
    for (int i = 0; i < result[1].size(); ++i) {
        cout << result[1][i];
        if (i < result[1].size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    return 0;
}