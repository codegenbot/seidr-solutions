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
    // Test cases with assert statements
    vector<string> strings = {"apple", "banana", "melon", "apricot"};
    string prefix = "ap";
    vector<string> expected_result = {"apple", "apricot"};
    assert(filter_by_prefix(strings, prefix) == expected_result);

    strings = {"cat", "dog", "elephant", "camel"};
    prefix = "ca";
    expected_result = {"cat", "camel"};
    assert(filter_by_prefix(strings, prefix) == expected_result);

    strings = {"table", "chair", "lamp", "couch"};
    prefix = "sofa";
    expected_result = {};
    assert(filter_by_prefix(strings, prefix) == expected_result);

    vector<string> a = {"apple", "banana", "cherry"};
    vector<string> b = {"apple", "banana", "cherry"};
    assert(issame(a, b));

    a = {"apple", "orange", "grape"};
    b = {"apple", "banana", "cherry"};
    assert(!issame(a, b));

    cout << "All test cases passed!" << endl;

    return 0;
}