#include <vector>
#include <string>

bool issame(const vector<string> a, const vector<string> b) {
    return a == b;
}

vector<vector<string>> all_prefixes(string str) {
    vector<vector<string>> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back({str.substr(0, i)});
    }
    return result;
}