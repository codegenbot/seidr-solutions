#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> filtered_strings;
    for (string s : strings) {
        if (s.substr(0, prefix.length()) == prefix) {
            filtered_strings.push_back(s);
        }
    }
    return filtered_strings;
}

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

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));

    return 0;
}