#include <vector>
#include <string>
#include <cassert>
#include <iostream>

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
    vector<pair<string, string>> a = {{ "xxx", "xxx" }, { "xxxxAA", "xxxAAA" }};
    assert(issame(a));
    vector<string> strings = {"hello", "hell", "world"};
    vector<string> filteredStrings = filter_by_prefix(strings, "hel");
    for (const auto& s : filteredStrings) {
        cout << s << endl;
    }
    return 0;
}