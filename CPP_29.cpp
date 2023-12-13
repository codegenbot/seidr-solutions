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
    // Test cases
    vector<string> strings = {"apple", "banana", "orange", "pear"};
    string prefix = "ap";
    vector<string> expected = {"apple"};
    vector<string> result = filter_by_prefix(strings, prefix);
    assert(issame(result, expected));

    strings = {"apple", "banana", "orange", "pear"};
    prefix = "ba";
    expected = {"banana"};
    result = filter_by_prefix(strings, prefix);
    assert(issame(result, expected));

    strings = {"apple", "banana", "orange", "pear"};
    prefix = "kiwi";
    expected = {};
    result = filter_by_prefix(strings, prefix);
    assert(issame(result, expected));

    cout << "All test cases pass" << endl;

    return 0;
}