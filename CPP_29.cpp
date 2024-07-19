#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix) {
    vector<string> filtered_strings;
    for (const auto& str : strings) {
        if (str.substr(0, prefix.size()) == prefix) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main() {
    vector<string> expected_result = {"xxx", "xxxAAA", "xxx"};
    
    vector<string> filtered_strings = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");

    assert(issame(filtered_strings, expected_result));

    for (const auto& str : filtered_strings) {
        cout << str << " ";
    }

    return 0;
}