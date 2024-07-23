```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> res(v.size());
    int rightmost = v.back();
    res[v.size() - 1] = rightmost;
    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= rightmost) {
            rightmost = v[i];
            res[i] = rightmost;
        }
    }
    return res;
}

vector<int> v = {1, 3, 4, 2, 8};
vector<int> res = leaders(v);
for (int i = 0; i < res.size(); ++i) {
    cout << res[i] << " ";
}