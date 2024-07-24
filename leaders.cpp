```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> res;
    int rightmost = v.back();
    res.push_back(rightmost); 
    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= rightmost) {
            rightmost = v[i];
            res.push_back(rightmost);
        }
    }
    return res;
}

int main() {
    int n = 0;
    vector<int> v;
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<int> res = leaders(v);
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
}