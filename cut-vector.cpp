```cpp
#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    pair<vector<int>, vector<int>> res;
    int n = v.size();
    for (int i = 0; i <= n - 1; i++) {
        if (i > 0 && v[i] != v[0]) {
            break;
        }
    }
    for (int j = 0; j < i; j++) {
        res.first.push_back(j < i ? v[j] : 0);
    }
    for (int j = i; j < n; j++) {
        res.second.push_back(i > j ? v[j] : 0);
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
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "[";
    for (int i = 0; i < res.first.size(); i++) {
        cout << res.first[i];
        if (i < res.first.size() - 1) {
            cout << " ";
        }
    }
    cout << "] [";
    for (int i = 0; i < res.second.size(); i++) {
        cout << res.second[i];
        if (i < res.second.size() - 1) {
            cout << " ";
        }
    }
    cout << "]" << endl;
    return 0;
}