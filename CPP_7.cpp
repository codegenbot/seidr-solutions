#include <initializer_list>

#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring) {
    vector<vector<string>> result;
    for (vector<string> s : strings) {
        vector<string> temp = {substring};
        bool same = issame(s, temp);
        if (!same) {
            result.push_back(s);
        }
    }
    return result;