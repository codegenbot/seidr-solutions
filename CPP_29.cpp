#include <iostream>
#include <vector>
#include <string>
#include <cassert>

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> filtered_strings;

    for (string str : strings) {
        if (str.substr(0, prefix.length()) == prefix) {
            filtered_strings.push_back(str);
        }
    }

    return filtered_strings;
}

int main() {
    assert(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") == vector<string>{"xxx", "xxxAAA", "xxx"});
    return 0;
}