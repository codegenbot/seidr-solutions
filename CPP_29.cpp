#include <iostream>
#include <vector>
#include <string>
#include <cassert>

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

vector<string> filter_by_prefix(vector<string> strings, string prefix);

int main() {
    vector<string> strings = {"apple", "banana", "apricot", "orange", "pear"};
    string prefix = "ap";
    vector<string> filtered_strings = filter_by_prefix(strings, prefix);

    for (const auto& str : filtered_strings) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}