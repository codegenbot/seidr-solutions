#include <vector>
#include <string>

bool issame(const string& a, const string& b) {
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const string& str : strings) {
        if (issame(str, substring)) {
            result.push_back(str);
        }
    }
    return result;
}