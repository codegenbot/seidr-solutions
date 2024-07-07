```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (!std::count(b.begin(), b.end(), a[i])) return false;
    }
    return true;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring) {
    vector<vector<string>> result;
    for (vector<string> s : strings) {
        bool same = issame(s, {substring});
        if (!same)
            result.push_back(s);
    }
    return result;
}