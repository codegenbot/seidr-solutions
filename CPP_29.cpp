#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
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

int main() {
    vector<string> strings = {"apple", "banana", "apricot", "orange"};
    string prefix = "ap";

    vector<string> filtered_strings = filter_by_prefix(strings, prefix);

    assert(issame(filtered_strings, {"apple", "apricot"}));
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxx", "xxxAAA"}, "xxx"), {"xxx", "xxx", "xxxAAA"}));

    return 0;
}