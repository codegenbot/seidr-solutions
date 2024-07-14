```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    vector<vector<int>> res;
    int n = v.size();
    for (int i = 0; i <= n - 1; i++) {
        if (i > 0 && v[i] != v[0]) {
            res.push_back(vector<int>(v.begin(), v.begin() + i));
            break;
        }
        else if (i == n - 1) {
            res.push_back(v);
            break;
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
        cout << res[0][i];
        if (i < res[0].size() - 1) {
            cout << " ";
        }
    }
    cout << "] [";
    for (int i = 0; i < res[1].size(); i++) {
        cout << res[1][i];
        if (i < res[1].size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    return 0;
}