```cpp
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
    vector<string> strings = {"apple", "banana", "pear", "orange", "grape"};
    string prefix = "a";
    vector<string> filtered_strings = filter_by_prefix(strings, prefix);
    vector<string> expected_output = {"apple"};

    assert(issame(filtered_strings, expected_output));

    return 0;
}
```