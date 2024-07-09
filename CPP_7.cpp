#include <vector>
#include <string>
using namespace std;

bool same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        size_t found = b[i].find(a[i]);
        if (found == string::npos) {
            return false;
        }
    }
    return true;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring) {
    vector<vector<string>> result;
    for (vector<string> s : strings) {
        bool same = true;
        for (string str : s) {
            size_t found = str.find(substring);
            if (found == string::npos) {
                same = false;
                break;
            }
        }
        if (same) {
            result.push_back({substring});
        } else {
            result.push_back(s);
        }
    }
    return result;
}