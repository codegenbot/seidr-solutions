#include <iostream>
#include <vector>

using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> res;
    for (int i = v.size() - 1; i >= 0; --i) {
        bool leader = true;
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[j] >= v[i]) {
                leader = false;
                break;
            }
        }
        if (leader) res.push_back(v[i]);
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v; 
    v.reserve(n); 
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> res = leaders(v);
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
}