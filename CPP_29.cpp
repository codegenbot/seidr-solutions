#include <iostream>
#include <vector>
#include <cassert>
#include <string>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix);

bool issame(vector<string> a, vector<string> b) {
    // Implementation of issame function
    return a == b;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAA", "xxx"}, "xxx"), {"xxx", "xxxAA", "xxx"}));
    // More test cases here

    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (string s : strings) {
        if (s.substr(0, prefix.size()) == prefix) {
            result.push_back(s);
        }
    }
    return result;
}