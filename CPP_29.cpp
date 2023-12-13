vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

#include <iostream>
#include <vector>
#include <cassert>

int main() {
    vector<string> strings = {"hello", "hi", "hey"};
    string prefix = "h";
    vector<string> expected_output = {"hello", "hi", "hey"};
    vector<string> result = filter_by_prefix(strings, prefix);

    assert(result == expected_output);

    return 0;
}