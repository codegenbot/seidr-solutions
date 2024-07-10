```cpp
#include <algorithm>
#include <string>
#include <vector>

#include <initializer_list>
#include <stdexcept>

bool isSame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] + b[i] != sortListSum({a[i], b[i]})[0]) return false;
    }
    return true;
}

vector<string> sortListSum(vector<string> v) {
    sort(v.begin(), v.end());
    return v;
}