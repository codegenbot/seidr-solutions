```cpp
#include <vector>

void solve(vector<int>& v, vector<int>& res) {
    int cur = v.back();
    for (int i = v.size() - 2; i >= 0; --i) { 
        if (v[i] >= cur) cur = v[i];
        else res.push_back(cur);
    }
}