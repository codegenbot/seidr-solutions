#include <vector>
#include <string>
#include <cassert>

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
    return a == b;
}

int main() {
    assert(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") == vector<string>{"xxx", "xxxAAA", "xxx"});
    return 0;
}