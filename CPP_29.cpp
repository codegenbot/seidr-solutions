#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));

    vector<string> filtered_strings = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");

    for (const auto& str : filtered_strings) {
        cout << str << " ";
    }

    return 0;
}