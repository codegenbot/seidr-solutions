#include <vector>
#include <string>

vector<string> filter_by_substring(const vector<string>& strings, const string& substring) {
    vector<string> result;
    for (const string& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}