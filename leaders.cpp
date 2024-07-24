```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> res;
    for (int i = v.size() - 1; i >= 0; --i) {
        bool isLeader = true;
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[i] <= v[j]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) res.push_back(v[i]);
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<int> res = leaders(v);
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
}