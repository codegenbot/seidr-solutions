#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (find(a[i].begin(), a[i].end(), ' ') == a[i].end() && 
            find(b[i].begin(), b[i].end(), ' ') == b[i].end()) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (string s : strings) {
        if (s.find(substring) != string::npos && issame({s}, {substring})) {
            result.push_back(s);
        }
    }
    return result;
}