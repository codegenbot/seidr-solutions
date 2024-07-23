```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> res(v.size(), 0); 
    for (int i = 0; i < v.size(); ++i) {
        int rightmost = v.back();
        res[i] = rightmost;
        while (v[--i] >= rightmost) {
            rightmost = v[i];
        }
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