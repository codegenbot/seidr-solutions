```
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame_helper(string s1, string s2) {
    if (s1.size() != s2.size()) {
        return false;
    }
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

bool issame(vector<pair<string, string>> a) {
    if (a.size() != 2) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!issame_helper(a[i].first, a[i].second)) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix) {
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    assert(issame({{ "xxx", "xxx" }, { "xxxxAA", "xxxAAA" } }));
    vector<pair<string, string>> pairs = {{ "xxx", "xxx" }, { "xxxxAA", "xxxAAA" }};
    if (!issame(pairs)) {
        cout << "Strings are not the same." << endl;
    }
    else {
        cout << "Strings are the same." << endl;
    }
    
    vector<string> strings = {"apple", "banana", "orange"};
    string prefix = "app";
    vector<string> filtered_strings = filter_by_prefix(strings, prefix);
    for (const auto& s : filtered_strings) {
        cout << s << endl;
    }
    return 0;
}